#include "MyForm2.h"

System::Void CourseWork2s::MyForm2::button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

System::Void CourseWork2s::MyForm2::textBox1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Enter a number")
	{
		textBox1->Clear();
	}
}
System::Void CourseWork2s::MyForm2::textBox1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "Enter a number";
	}
}
System::Void CourseWork2s::MyForm2::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text && (textBox1->Text != "Enter a number")) {
		Boolean check = parentForm->FindRow(textBox1->Text);
		if (check) {
			Node^ temp = parentForm->a->get_by_key(Convert::ToInt32(textBox1->Text));
			label7->Text = Convert::ToString(temp->Key);
			label5->Text = temp->Name;
			label6->Text = temp->Info;
			label5->Visible = true;
			label6->Visible = true;
			label7->Visible = true;
		}
		else {
			MessageBox::Show("There are no rows with that value");
			return;
		}
	}
}
System::Void CourseWork2s::MyForm2::MyForm2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == Windows::Forms::MouseButtons::Left)
	{
		xOffset = -e->X - SystemInformation::FrameBorderSize.Width;
		yOffset = -e->Y - SystemInformation::FrameBorderSize.Height;
		mouseOffset = System::Drawing::Point(xOffset, yOffset);
		isMouseDown = true;
	}
}
System::Void CourseWork2s::MyForm2::MyForm2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (isMouseDown)
	{
		Point mousePos = Control::MousePosition;
		mousePos.Offset(mouseOffset.X, mouseOffset.Y);
		this->Location = mousePos;
	}
}
System::Void CourseWork2s::MyForm2::MyForm2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == Windows::Forms::MouseButtons::Left)
		isMouseDown = false;
}

