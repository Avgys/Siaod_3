//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#endif
#include <ustring.h>
#define SIZE 20

 class   Tpg{
 public:
 unsigned int Page;
 struct Tpg *Next;
 struct TItem *Above;
 };

 class   TItem{
 public:
 UnicodeString Termin;
 struct TItem *Above;
 struct TItem *Subtermin;
 struct TItem *Next;
 struct Tpg* Page;
 };

class HashTable{
public:
unsigned int GetKey(UnicodeString word);
   TItem* list[SIZE];
//void AddItem();
//void FindItem();
TItem* __fastcall AddItem(TItem *Prev, UnicodeString newtermin, unsigned int newpage);
void __fastcall DisplayList(UnicodeString newtermin, unsigned int newpage,unsigned int key);
void __fastcall LoadFromFile1Click(TObject *Sender);
};
