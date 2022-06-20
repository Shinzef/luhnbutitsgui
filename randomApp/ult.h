#pragma once


// luhn
int luhn_algo(std::string num) {

	if (num.size() < 2) { // check if number is too short
		return false;
	}
	if (num.size() > 19) { // max 19 digits
		return false;
	}

	int nDigits = num.size();
	int nSum = 0, isSecond = false;
	for (int i = nDigits - 1; i >= 0; i--) {
		int n = num[i] - '0';
		if (isSecond) {
			n *= 2;
		}
		n = (n / 10) + (n % 10);
		nSum += n;
		isSecond = !isSecond;
	}
	 
	return (nSum % 10 == 0);
	
}

std::string checkType(std::string str) {
	if (str.length() == 15) {
		if (str.substr(0, 2) == "34" || str.substr(0, 2) == "37") {
			return "AMEX";
		}
	}
	else if (str.length() == 16) {
		if (str.substr(0, 4) == "6011") {
			return "Discover";
		}
		else if (str.substr(0, 1) == "4") {
			return "VISA";
		}
		else if (str.substr(0, 2) == "51" || str.substr(0, 2) == "52" || str.substr(0, 2) == "53" || str.substr(0, 2) == "54" || str.substr(0, 2) == "55") {
			return "MasterCard";
		}
	}
	else if (str.length() == 13) {
		if (str.substr(0, 1) == "4") {
				return "VISA";
		}
		else if (str.substr(0, 2) == "51" || str.substr(0, 2) == "52" || str.substr(0, 2) == "53" || str.substr(0, 2) == "54" || str.substr(0, 2) == "55") {
				return "MasterCard";
		}
	}
	return "AMOGUS";
}
