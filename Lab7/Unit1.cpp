//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <stdlib.h>
#include <time.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
#include "Hash.h"
TForm1 *Form1;
Hash<int> *hash;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	 srand(time(0));
	 hash = new Hash<int>(StrToInt(Edit2 -> Text));
	 for (int i = 0; i < StrToInt(Edit1 -> Text); i++) {
		 int a = rand()%10+1;
		 hash->insert(a, a);
         Memo1 -> Lines -> Add(StrToInt(a));
	 }
	 hash->View(Memo2);
     Edit3 -> Text = IntToStr(hash -> GetMaxKey());
}
//---------------------------------------------------------------------------
