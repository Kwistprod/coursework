#include "HandBook.h"
#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::IO;
using namespace System::Text;
using namespace System::Drawing;
using namespace System::Threading;

System::Void CourseWork2s::MyForm::ClearGrid() {
	dataGridView1->Rows->Clear();
}
System::Void CourseWork2s::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm4^ f5 = gcnew MyForm4(this);
	f5->ShowDialog();
}

System::Void CourseWork2s::MyForm::dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		row = dataGridView1->CurrentRow->Index;
	}
	catch (Exception ^ e) {
		row;
	}
}


System::Void CourseWork2s::MyForm::EditGrid(int a, int b, String^ c, String^ d) {
	dataGridView1->Rows[a]->Cells[0]->Value = b;
	dataGridView1->Rows[a]->Cells[1]->Value = c;
	dataGridView1->Rows[a]->Cells[2]->Value = d;
}


Node^ CourseWork2s::MyForm::getNodebyRow(int x) {
	int tmp = x;
	return a->get_by_index(tmp);
}

Boolean CourseWork2s::MyForm::IsSelectedRow() {
	if (dataGridView1->SelectedRows != nullptr)
		return true;
	else return false;
}


System::Boolean CourseWork2s::MyForm::FindRow(String^ s) {
	dataGridView1->ClearSelection();
	int tmp = 0;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		if (dataGridView1->Rows[i]->Cells[0]->Value->ToString() == s) {
			dataGridView1->Rows[i]->Selected = true;
			tmp++;
		}
	}
	if (tmp > 0)
		return true;
	else
		return false;

}

Void CourseWork2s::MyForm::Add2Grid(int a, String^ b, String^ c) {
	dataGridView1->Rows->Add(a,b,c);
}


System::Void CourseWork2s::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->RowTemplate->MinimumHeight = 45;
	a = gcnew HandBook();
	a->LoadFromFile(path);
	for (it = a->begin(),end = a->end(); it != end; ++it) {
		Add2Grid(it->ptr->Key, it->ptr->Name, it->ptr->Info);
	}

}

System::Void CourseWork2s::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
System::Void CourseWork2s::MyForm::panel2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == Windows::Forms::MouseButtons::Left)
		{
			xOffset = -e->X - SystemInformation::FrameBorderSize.Width - 211;
			yOffset = -e->Y - SystemInformation::FrameBorderSize.Height;
			mouseOffset = System::Drawing::Point(xOffset, yOffset);
			isMouseDown = true;
		}
	}

System::Void CourseWork2s::MyForm::panel2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isMouseDown)
	{
		Point mousePos = Control::MousePosition;
		mousePos.Offset(mouseOffset.X, mouseOffset.Y);
		this->Location = mousePos;
	}

}
System::Void CourseWork2s::MyForm::panel2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == Windows::Forms::MouseButtons::Left)
	{
		isMouseDown = false;
	}
}


System::Void CourseWork2s::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

System::Void CourseWork2s::MyForm::button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (!bord) {
		ButBord->Height = button4->Height;
		ButBord->Top = button4->Top;
		ButBord->Visible = true;
	}
}
System::Void CourseWork2s::MyForm::button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!bord)
		ButBord->Visible = false;
}
System::Void CourseWork2s::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e) {
	grid = false;
	bord = true;
	ButBord->Visible = true;
	ButBord->Height = button4->Height;
	ButBord->Top = button4->Top;
	MyForm1^ f2 = gcnew MyForm1(this);
	f2->ShowDialog();
}
System::Void CourseWork2s::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e) {
	grid = false;
	bord = true;
	ButBord->Visible = true;
	ButBord->Height = button5->Height;
	ButBord->Top = button5->Top;
	int temp;
	System::Windows::Forms::DialogResult result= MessageBox::Show("Delete selected row?", "Delete row", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (result == ::DialogResult::Yes) {
		try{
			for each (DataGridViewRow^ var in dataGridView1->SelectedRows)
			{
				a->DelbyIndex(var->Index);
				dataGridView1->Rows->RemoveAt(var->Index);
			}
		}
		catch (Exception ^ e) {
			MessageBox::Show("There are no rows to delete");
		}
	}
}
System::Void CourseWork2s::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
	grid = false;
	bord = true;
	ButBord->Visible = true;
	ButBord->Height = button6->Height;
	ButBord->Top = button6->Top;
	MyForm2^ f3 = gcnew MyForm2(this);
	f3->Show();
}

System::Void CourseWork2s::MyForm::button7_Click(System::Object^ sender, System::EventArgs^ e) {
	bord = true;
	ButBord->Visible = true;
	ButBord->Height = button7->Height;
	ButBord->Top = button7->Top;
	if (a->count_ >= 1) {
		if (CheckThread()) {
			MyForm3^ f4 = gcnew MyForm3(this);
			f4->Show();
			f4->TopMost = true;
		}
		else {
			MyForm5^ f6 = gcnew MyForm5(this);
			f6->ShowDialog();
		}
	}
	else {
		MessageBox::Show("Nothing to change");
	}
}
System::Void CourseWork2s::MyForm::button8_Click(System::Object^ sender, System::EventArgs^ e) {
	grid = false;
	bord = true;
	ButBord->Visible = true;
	ButBord->Height = button8->Height;
	ButBord->Top = button8->Top;
	try {
		a->Sort();
		dataGridView1->Rows->Clear();
		for (it = a->begin(), end = a->end(); it != end; ++it) {
			Add2Grid(it->ptr->Key, it->ptr->Name, it->ptr->Info);
		}
	}
	catch (Exception ^ e) {
		MessageBox::Show("Nothing to sort");
	}
}
System::Void CourseWork2s::MyForm::button5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (!bord) {
		ButBord->Height = button5->Height;
		ButBord->Top = button5->Top;
		ButBord->Visible = true;
	}
}
System::Void CourseWork2s::MyForm::button5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!bord)
		ButBord->Visible = false;
}
System::Void CourseWork2s::MyForm::button6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (!bord) {
		ButBord->Height = button6->Height;
		ButBord->Top = button6->Top;
		ButBord->Visible = true;
	}
}
System::Void CourseWork2s::MyForm::button6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!bord)
		ButBord->Visible = false;
}
System::Void CourseWork2s::MyForm::button7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!bord)
		ButBord->Visible = false;
}
System::Void CourseWork2s::MyForm::button7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (!bord) {
		ButBord->Height = button7->Height;
		ButBord->Top = button7->Top;
		ButBord->Visible = true;
	}
}
System::Void CourseWork2s::MyForm::button8_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (!bord)
		ButBord->Visible = false;
}
System::Void CourseWork2s::MyForm::button8_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (!bord) {
		ButBord->Height = button8->Height;
		ButBord->Top = button8->Top;
		ButBord->Visible = true;
	}
}
System::Void CourseWork2s::MyForm::MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	try {
		StreamWriter^ sw = gcnew StreamWriter(path, false, Encoding::GetEncoding(1251));
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			sw->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value + "\t" + dataGridView1->Rows[i]->Cells[1]->Value + "\t" + dataGridView1->Rows[i]->Cells[2]->Value);
		}
		sw->Close();
	}
	catch (Exception ^ e) {
		MessageBox::Show("error");
	}
}

