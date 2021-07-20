static char de_layout[128];

/*
* Wrong Keys (DE = what I pressed; EN = what was displayed ingame):
* DE | EN
* %  | #
* #  | \ - ???
* '  | | - ???
* ´  | Nothing (no accents)
* `  | Nothing (no accents)
* 
*/


static void de_init()
{
	for (int i = 0; i < 128; ++i)
		de_layout[i] = 0;

	// Define translate
	de_layout['y'] = 'z';
	de_layout['Y'] = 'Z';
	de_layout['z'] = 'y';
	de_layout['Z'] = 'Y';
	de_layout['('] = 'ü';
	de_layout['{'] = 'Ü';
	de_layout['\''] = 'ä';
	de_layout['"'] = 'Ä';
	de_layout[';'] = 'ö';
	de_layout[':'] = 'Ö';
	de_layout[')'] = '=';
	de_layout['}'] = '*';
	de_layout['<'] = ';';
	de_layout['>'] = ':';
	de_layout['/'] = '-';
	de_layout['?'] = '_';
	de_layout['@'] = '"';
	de_layout['#'] = '§';
	de_layout['^'] = '&';
	de_layout['&'] = '/';
	de_layout['é'] = '€';
	de_layout['-'] = 'ß';
}