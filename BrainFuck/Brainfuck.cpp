#include <iostream>

void prepare(char buff[], size_t len)
{
	for (unsigned i = 0; i < len; i++) {
		buff[i] = '\0';
	}
}

void eval(const char code[])
{
	size_t bufferSize = 30000;
	auto *buffer = new char[bufferSize];
	prepare(buffer, bufferSize);
	auto ptr = buffer;
	const char *data = code;
	while (*data) {
		int br_cnt = 0;
		switch (*data) {
			case '>':
				ptr++;
				break;
			case '<':
				ptr--;
				break;
			case '+':
				(*ptr)++;
				break;
			case '-':
				(*ptr)--;
				break;
			case '.':
				std::cout << *ptr;
				break;
			case ',':
				std::cout << '>';
				std::cin >> *ptr;
				break;
			case '[':
				br_cnt = 1;
				if (*ptr == '\0') {
					do {
						data++;
						if (*data == '[') {
							br_cnt++;
						} else if (*data == ']') {
							br_cnt--;
						}
					} while (br_cnt != 0);
				}
				break;
			case ']':
				br_cnt = 0;
				do {
					if (*data == '[') {
						br_cnt++;
					} else if (*data == ']') {
						br_cnt--;
					}
					data--;
				} while (br_cnt != 0);
				break;
			default:
				break;
		}
		data++;
	}
	delete[] buffer;
	buffer = nullptr;
}
