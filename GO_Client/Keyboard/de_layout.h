static char de_layout[128];
static char de_tilde[2];

static void de_init()
{
	for (int i = 0; i < 128; ++i)
		de_layout[i] = 0;

	// Define translate
	de_layout['q'] = '�';
	de_layout['Q'] = '�';
	de_layout['w'] = '�';
	de_layout['W'] = '�';
	de_layout['e'] = '�';
	de_layout['E'] = '�';
	de_layout['r'] = '�';
	de_layout['R'] = '�';
	de_layout['t'] = '�';
	de_layout['T'] = '�';
	de_layout['y'] = '�';
	de_layout['Y'] = '�';
	de_layout['u'] = '�';
	de_layout['U'] = '�';
	de_layout['i'] = '�';
	de_layout['I'] = '�';
	de_layout['o'] = '�';
	de_layout['O'] = '�';
	de_layout['p'] = '�';
	de_layout['P'] = '�';
	de_layout['('] = '�';
	de_layout['{'] = '�';
	de_layout[')'] = '�';
	de_layout['}'] = '�';
	de_layout['a'] = '�';
	de_layout['A'] = '�';
	de_layout['s'] = '�';
	de_layout['S'] = '�';
	de_layout['d'] = '�';
	de_layout['D'] = '�';
	de_layout['f'] = '�';
	de_layout['F'] = '�';
	de_layout['g'] = '�';
	de_layout['G'] = '�';
	de_layout['h'] = '�';
	de_layout['H'] = '�';
	de_layout['j'] = '�';
	de_layout['J'] = '�';
	de_layout['k'] = '�';
	de_layout['K'] = '�';
	de_layout['l'] = '�';
	de_layout['L'] = '�';
	de_layout[';'] = '�';
	de_layout[':'] = '�';
	de_layout['\''] = '�';
	de_layout['"'] = '�';
	de_layout['z'] = '�';
	de_layout['Z'] = '�';
	de_layout['x'] = '�';
	de_layout['X'] = '�';
	de_layout['c'] = '�';
	de_layout['C'] = '�';
	de_layout['v'] = '�';
	de_layout['V'] = '�';
	de_layout['b'] = '�';
	de_layout['B'] = '�';
	de_layout['n'] = '�';
	de_layout['N'] = '�';
	de_layout['m'] = '�';
	de_layout['M'] = '�';
	de_layout[','] = '�';
	de_layout['<'] = '�';
	de_layout['.'] = '�';
	de_layout['>'] = '�';
	de_layout['/'] = '.';
	de_layout['?'] = ',';
	de_layout['@'] = '"';
	de_layout['#'] = '�';
	de_layout['$'] = ';';
	de_layout['^'] = ':';
	de_layout['&'] = '?';

	// Tilde
	de_tilde[0] = '�';
	de_tilde[1] = '�';
}