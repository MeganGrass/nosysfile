
CHAR * System_String::GetDirectory(CHAR * _Format, ...) {

	// format
	CHAR * _String = Format(_Format);

	// work
	if (strlen(_String)) {

		// fix illegal characters
		for (size_t n = 0; n < strlen(_String); n++)
		{
			switch (_String[n])
			{
			case 0x2F:
			{
				// slash correction
				_String[n] = 0x5C;
			}
			break;
			//			case 0x3A:	// harddisk
			case 0x2A:
			case 0x3F:
			case 0x22:
			case 0x3C:
			case 0x3E:
			case 0x7C:
			{
				// remove illegal character from string
				for (size_t x = n; x < strlen(_String) - 1; x++)
				{
					_String[x] = _String[x + 1];
				}
				_String[strlen(_String) - 1] = _String[strlen(_String)] = 0x00;
				n--;
			}
			break;
			}
		}

		// fix _String if it begins with either a space, period or slash (WIP, need code for ..\ dirs)
		switch (_String[0])
		{
		case 0x20:
		case 0x2E:
		case 0x5C:
			for (size_t n = 0; n < strlen(_String); n++)
			{
				if (_String[n] != 0x20 && _String[n] != 0x2E && _String[n] != 0x5C) {
					n = (strlen(_String) + 1);
					break;
				}
				else {
					for (size_t x = n; x < strlen(_String) - 1; x++)
					{
						_String[x] = _String[x + 1];
					}
					_String[strlen(_String) - 1] = _String[strlen(_String)] = 0x00;
					n = 0;
				}
			}
			break;
		}

		// ensure directory names won't begin with a space or period
		for (size_t n = 0; n < strlen(_String); n++)
		{
			switch (_String[n])
			{
			case 0x2E:
			case 0x3A:
			case 0x5C:
			{
				if (_String[n + 1] != 0x20) {
				}
				else {
					for (size_t x = (n + 1); x < strlen(_String) - 1; x++)
					{
						_String[x] = _String[x + 1];
					}
					_String[strlen(_String) - 1] = _String[strlen(_String)] = 0x00;
					n--;
				}
			}
			break;
			}
		}

		// ensure directory sequences won't have double slashes
		for (size_t n = 0; n < strlen(_String); n++)
		{
			switch (_String[n]) {
			case 0x5C:
			{
				if (_String[n + 1] != 0x5C) {
					n = (strlen(_String) + 1);
					break;
				}
				else {
					for (size_t x = n; x < strlen(_String) - 1; x++)
					{
						_String[x] = _String[x + 1];
					}
					_String[strlen(_String) - 1] = _String[strlen(_String)] = 0x00;
					n--;
				}
			}
			break;
			}
		}

		// ensure individual directory names won't begin with a period
		for (size_t n = 0; n < strlen(_String); n++)
		{
			switch (_String[n]) {
			case 0x2E:
			{
				if (_String[n - 1] != 0x5C) {
					n = (strlen(_String) + 1);
					break;
				}
				else {
					for (size_t x = n; x < strlen(_String) - 1; x++)
					{
						_String[x] = _String[x + 1];
					}
					_String[strlen(_String) - 1] = _String[strlen(_String)] = 0x00;
					n--;
				}
			}
			break;
			}
		}

		// complete
		return _String;
	}

	// _Format string error
	return "\0\0\0\0";

}
WCHAR * System_String::GetDirectory(WCHAR * _Format, ...) {

	// format
	WCHAR * _String = Format(_Format);

	// work
	if (wcslen(_String)) {

		// fix illegal characters
		for (size_t n = 0; n < wcslen(_String); n++)
		{
			switch (_String[n])
			{
			case 0x2F:
			{
				// slash correction
				_String[n] = 0x5C;
			}
			break;
//			case 0x3A:	// harddisk
			case 0x2A:
			case 0x3F:
			case 0x22:
			case 0x3C:
			case 0x3E:
			case 0x7C:
			{
				// remove illegal character from string
				for (size_t x = n; x < wcslen(_String) - 1; x++)
				{
					_String[x] = _String[x + 1];
				}
				_String[wcslen(_String) - 1] = _String[wcslen(_String)] = 0x00;
				n--;
			}
			break;
			}
		}

		// fix _String if it begins with either a space, period or slash (WIP, need code for ..\ dirs)
		switch (_String[0])
		{
		case 0x20:
		case 0x2E:
		case 0x5C:
			for (size_t n = 0; n < wcslen(_String); n++)
			{
				if (_String[n] != 0x20 && _String[n] != 0x2E && _String[n] != 0x5C) {
					n = (wcslen(_String) + 1);
					break;
				} else {
					for (size_t x = n; x < wcslen(_String) - 1; x++)
					{
						_String[x] = _String[x + 1];
					}
					_String[wcslen(_String) - 1] = _String[wcslen(_String)] = 0x00;
					n = 0;
				}
			}
		break;
		}

		// ensure directory names won't begin with a space or period
		for (size_t n = 0; n < wcslen(_String); n++)
		{
			switch (_String[n])
			{
			case 0x2E:
			case 0x3A:
			case 0x5C:
			{
				if (_String[n + 1] != 0x20) {
				} else {
					for (size_t x = (n + 1); x < wcslen(_String) - 1; x++)
					{
						_String[x] = _String[x + 1];
					}
					_String[wcslen(_String) - 1] = _String[wcslen(_String)] = 0x00;
					n--;
				}
			}
			break;
			}
		}

		// ensure directory sequences won't have double slashes
		for (size_t n = 0; n < wcslen(_String); n++)
		{
			switch (_String[n]) {
			case 0x5C:
			{
				if (_String[n + 1] != 0x5C) {
					n = (wcslen(_String) + 1);
					break;
				} else {
					for (size_t x = n; x < wcslen(_String) - 1; x++)
					{
						_String[x] = _String[x + 1];
					}
					_String[wcslen(_String) - 1] = _String[wcslen(_String)] = 0x00;
					n--;
				}
			}
			break;
			}
		}

		// ensure individual directory names won't begin with a period
		for (size_t n = 0; n < wcslen(_String); n++)
		{
			switch (_String[n]) {
			case 0x2E:
			{
				if (_String[n - 1] != 0x5C) {
					n = (wcslen(_String) + 1);
					break;
				} else {
					for (size_t x = n; x < wcslen(_String) - 1; x++)
					{
						_String[x] = _String[x + 1];
					}
					_String[wcslen(_String) - 1] = _String[wcslen(_String)] = 0x00;
					n--;
				}
			}
			break;
			}
		}

		// complete
		return _String;
	}
	
	// _Format string error
	return L"\0\0\0\0";

}