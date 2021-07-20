#include "stdafx.h"
// Layouts
#include "Keyboard/ru_layout.h"
#include "Keyboard/de_layout.h"

CKeyBoard::CKeyBoard() :
	keyLayout(CKeyBoard::ENGLISH)
{
	ru_init();
	de_init();
}

void CKeyBoard::SetLayout(KeyBoardLayout layout)
{
	this->keyLayout = layout;
}

void CKeyBoard::SwitchLayout()
{
	int layout = static_cast<int>(this->keyLayout);
	if (++layout >= MAX_KEYBOARD_LAYOUTS)
		layout = 0;

	this->keyLayout = static_cast<KeyBoardLayout>(layout);
}

char CKeyBoard::GetTranslatedLetter(char letter)
{
	switch (this->keyLayout)
	{
	case ENGLISH:
		return letter;
	case GERMAN:
		return de_layout[letter] != 0 ? de_layout[letter] : letter;
	case RUSSIAN:
		if (zCInput::GetInput()->KeyPressed(KEY_GRAVE))
			return ru_tilde[zCInput::GetInput()->KeyPressed(KEY_LSHIFT) || zCInput::GetInput()->KeyPressed(KEY_RSHIFT)];
		else
			return ru_layout[letter] != 0 ? ru_layout[letter] : letter;
	}
	
	return '0';
}