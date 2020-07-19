#include "MyForm1.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::IO;
using namespace System::Text;
using namespace System::Drawing;
using namespace System::Threading;

System::Void CourseWork2s::MyForm1::MyForm1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == Windows::Forms::MouseButtons::Left)
	{
		xOffset = -e->X - SystemInformation::FrameBorderSize.Width;
		yOffset = -e->Y - SystemInformation::FrameBorderSize.Height;
		mouseOffset = System::Drawing::Point(xOffset, yOffset);
		isMouseDown = true;
	}
}
 System::Void CourseWork2s::MyForm1::MyForm1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	 if (isMouseDown)
	 {
		 Point mousePos = Control::MousePosition;
		 mousePos.Offset(mouseOffset.X, mouseOffset.Y);
		 this->Location = mousePos;
	 }
}
System::Void CourseWork2s::MyForm1::MyForm1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == Windows::Forms::MouseButtons::Left)
		isMouseDown = false;
}


System::Void CourseWork2s::MyForm1::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

System::Void CourseWork2s::MyForm1::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	arr[0] = textBox1->Text;
	arr[1] = textBox2->Text;
	arr[2] = textBox3->Text;
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "") {
		try {
			parentForm->a->Add(Convert::ToInt64(arr[0]), arr[1], arr[2]);
			parentForm->Add2Grid(Convert::ToInt64(arr[0]), arr[1], arr[2]);
			this->Close();
		}
		catch (Exception ^ e) {
			MessageBox::Show("You should use only numbers in the firsst field!");
		}
	}
	else {
		MessageBox::Show("All fields should be filled");
	}
}


