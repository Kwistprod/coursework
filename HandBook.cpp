#include "HandBook.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::IO;
using namespace System::Text;
using namespace System::Drawing;
Void HandBook::LoadFromFile(String^ s) {
	String^ fname = s;
	if (!File::Exists(fname)) {
		StreamWriter^ sw = gcnew StreamWriter(fname, false, Encoding::GetEncoding(1251));
		sw->Close();
	}
	try {
		StreamReader^ sr = gcnew StreamReader(fname, Encoding::GetEncoding(1251));
		if (!sr->Peek())
			return;
		String^ str;
		while ((str = sr->ReadLine()) != nullptr) {
			array<String^, 1>^ strArr = str->Split(gcnew array<Char, 1>{'\t'}, System::StringSplitOptions::RemoveEmptyEntries);
			this->Add(Convert::ToInt32(strArr[0], 10), strArr[1], strArr[2]);
		}
		sr->Close();
	}

	catch (Exception ^ e) {
		if (dynamic_cast<FileNotFoundException^>(e))
			MessageBox::Show("Couldnt't find the file " + fname);
		else
			MessageBox::Show("Couldn't read the file");
	}
}

HandBook::~HandBook() {
	while(Head) {
		Tail = Head->Next;
		delete Head;
		Head = Tail;
	}
}
Void HandBook::Add(int a, String^ b, String^ c) {
	Node^ temp = gcnew Node;
	temp->Next = nullptr;
	temp->Key = a;
	temp->Name = b;
	temp->Info = c;

	count_++;
	if(Head == nullptr)
	{
		temp->Prev = nullptr;
		Head = Tail = temp;
	}
	else
	{
		temp->Prev = Tail;
		Tail->Next = temp;
		Tail = temp;
	}
}

String^ HandBook::gName(int b){
	Node^ tmp = Head;
	while (tmp) {
		if (tmp->Key == b)
			return tmp->Name;
		tmp = tmp->Next;
	}
	return "Ошибка";
}
String^ HandBook::gInfo(int b) {
	Node^ tmp = Head;
	while (tmp) {
		if (tmp->Key == b)
			return tmp->Info;
		tmp = tmp->Next;
	}
	return "Ошибка";
}

Void HandBook::DelbyIndex(int a) {
	Node^ temp = Head;
		for (int i = 0; i < a; i++) {
			temp = temp->Next;
		}
		if (temp == Head) {
			if (count_ == 1) {
				delete temp;
				Head = nullptr;
				Tail = nullptr;
				return;
			}
			Head = temp->Next;
			Head->Prev = nullptr;
			count_--;
		}
		else if (temp == Tail) {
			Tail = temp->Prev;
			Tail->Next = nullptr;
			count_--;
		}
		else {
			temp->Prev->Next = temp->Next;
			temp->Next->Prev = temp->Prev;
			count_--;
		}
	delete temp;
	return;
}
Void HandBook::Del(int a) {
	Node^ temp = Head;
	while (temp) {
		if (temp->Key == a) {
			if (temp == Head) {
				Head = temp->Next;
				Head->Prev = nullptr;
				count_--;
			}
			else if (temp == Tail) {
				Tail = temp->Prev;
				Tail->Next = nullptr;
				count_ --;
			}
			else{
				temp->Prev->Next = temp->Next;
				temp->Next->Prev = temp->Prev;
				count_--;
			}
			delete temp;
			return;
		}
		temp = temp->Next;
	}

}
Node^ HandBook::get_by_index(int a) {
	if (a == 0)
		return this->Head;
	else
	{
		Node^ cur = Head;
		for (int i = 0; i < a; i++) 
			cur = cur->Next;	
		return cur;
	}
}
Node^ HandBook::get_by_key(int a) {
	Node^ temp = Head;
	while (temp) {
		if (temp->Key == a)
			return temp;
		temp = temp->Next;
	}
}
String^ Node::getName() {
	if (this)
		return this->Name;
	else
		return "false";
}
String^ Node::getInfo() {
	if (this)
		return this->Info;
	else
		return "false";
}
Void HandBook::Sort() {
	Node^ left = Head;
	Node^ right = Head->Next;
	Node^ temp = gcnew Node;
	while (right) {
		while (left->Next) {
			while (right) {
				if ((left->Key) > (right->Key)) {
					temp->Key = left->Key;
					temp->Name = left->Name;
					temp->Info = left->Info;
					left->Key = right->Key;
					left->Name = right->Name;
					left->Info = right->Info;
					right->Key = temp->Key;
					right->Name = temp->Name;
					right->Info = temp->Info;
				}
				right = right->Next;
			}
			left = left->Next;
			right = left->Next;
		}
	}
}
Node^ HandBook::operator[](int i) {
	Node^ tmp = Head;
	if ((i <= count_-1)&& (i >= 0)) {
		while (i && tmp != Tail)
		{
			i--;
			tmp = tmp->Next;

		}
		return tmp;

	}
	else 
		MessageBox::Show("Exception");
	
}
Iterator^ HandBook::begin() {
	return %Iterator(Head);
}
Iterator^ HandBook::end() {
	return %Iterator(nullptr);
}
Iterator^ Iterator::operator++() {
	if (ptr)
	{
		ptr = ptr->Next; 
		return this;
	}
	else return nullptr;
}
Boolean Iterator::operator ==(Iterator^ it) {
	return ptr == it->ptr;
}
Boolean Iterator::operator!=(Iterator^ it) {
	return ptr != it->ptr;
	
}
