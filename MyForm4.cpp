#include "MyForm4.h"
System::Void CourseWork2s::MyForm4::button2_Click(System::Object^ sender, System::EventArgs^ e) {
	parentForm->a->~HandBook();
	parentForm->ClearGrid();
	if (!File::Exists(parentForm->path)) 
		File::Create(parentForm->path)->Close();
	
}