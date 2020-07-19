#include "MyForm5.h"
System::Void CourseWork2s::MyForm5::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" || textBox2->Text != "" || textBox3->Text != "") {
		if (textBox1->Text != "") {
			try {
				temp->Key = Convert::ToInt64(textBox1->Text);
			}
			catch (Exception ^ e) {
				MessageBox::Show("You should use only numbers");
			}
		}
		if (textBox2->Text != "") {
			temp->Name = textBox2->Text;
		}
		if (textBox3->Text != "") {
			temp->Info = textBox3->Text;
		}
	}
	else {
		MessageBox::Show("You didn't change anything");
	}
	parentForm->EditGrid(tmp, temp->Key, temp->Name, temp->Info);
	this->Close();
}
System::Void CourseWork2s::MyForm5::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
System::Void CourseWork2s::MyForm5::MyForm5_Load(System::Object^ sender, System::EventArgs^ e) {
	tmp = parentForm->row;
	temp = parentForm->a->get_by_index(tmp);
}

System::Void CourseWork2s::MyForm5::MyForm5_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == Windows::Forms::MouseButtons::Left)
	{
		xOffset = -e->X - SystemInformation::FrameBorderSize.Width;
		yOffset = -e->Y - SystemInformation::FrameBorderSize.Height;
		mouseOffset = System::Drawing::Point(xOffset, yOffset);
		isMouseDown = true;
	}
}
System::Void CourseWork2s::MyForm5::MyForm5_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isMouseDown)
	{
		Point mousePos = Control::MousePosition;
		mousePos.Offset(mouseOffset.X, mouseOffset.Y);
		this->Location = mousePos;
	}
}
System::Void CourseWork2s::MyForm5::MyForm5_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == Windows::Forms::MouseButtons::Left)
		isMouseDown = false;
}