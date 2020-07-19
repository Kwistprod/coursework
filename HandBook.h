#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::IO;
using namespace System::Text;
using namespace System::Drawing;

ref class Node {
public:
	int Key;
	String^ Info;
	String^ Name;
	Node^ Next, ^ Prev;
	String^ getName();
	String^ getInfo();
};


ref class Iterator {
public:
	Node^ ptr;
	Iterator() :ptr(nullptr) {};
	Iterator(Node^ a) :ptr(a) {};
	Iterator^ operator ++ ();
	Boolean operator==(Iterator^ it);
	Boolean operator!=(Iterator^ it);
};


ref class HandBook
{
public:
	Node^ Head;
	Node^ Tail;
	int count_ = 0;
	~HandBook();
	HandBook() :Head(nullptr), Tail(nullptr) {}
	Void LoadFromFile(String^ path);
	Void Add(int a, String^ b, String^ c);
	Void Del(int a);
	Void DelbyIndex(int a);
	Void Sort();
	Node^ get_by_index(int a);
	Node^ operator[](int i);
	String^ gName(int a);
	String^ gInfo(int a);
	Iterator^ begin();
	Node^ get_by_key(int a);
	Iterator^ end();
};