#pragma once
#include "MyForm.h"
namespace CourseWork2s {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(MyForm^ parent)
		{
			InitializeComponent();
			parentForm = parent;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	public:
	public: System::Windows::Forms::TextBox^ textBox2;
	private:
	public: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	public:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	public: System::Windows::Forms::Label^ label6;
	private:
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label8;
	public: System::Windows::Forms::Label^ label9;
	public: System::Windows::Forms::Label^ label10;
	public: System::Windows::Forms::Label^ label11;
	public: System::Windows::Forms::Label^ label12;
	public: System::Windows::Forms::Label^ label13;
	public: System::Windows::Forms::Label^ label14;
	public: System::Windows::Forms::Label^ label15;
	public: System::Windows::Forms::Label^ label16;

	public:
	private:
		MyForm^ parentForm;
	public:
	protected:

	protected:

	private:

	public:

	private:

	private: Thread^ thisThread;

	private:



	public:
		int num = 0;
		Boolean check1 = true;
		Point mouseOffset;
		bool isMouseDown = false;
		int xOffset, yOffset;
		int tmp;

	public:
		Node^ temp;

	private:
	private: System::Void MyForm3_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void MyForm3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void MyForm3_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		   /// <summary>
		   /// ќб€зательна€ переменна€ конструктора.
		   /// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label1->Location = System::Drawing::Point(12, 9);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(202, 24);
			   this->label1->TabIndex = 7;
			   this->label1->Text = L"Editing an element";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // button1
			   // 
			   this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			   this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)),
				   static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			   this->button1->FlatAppearance->BorderSize = 0;
			   this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightCyan;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(77)), static_cast<System::Int32>(static_cast<System::Byte>(77)),
				   static_cast<System::Int32>(static_cast<System::Byte>(77)));
			   this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			   this->button1->Location = System::Drawing::Point(866, 1);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(32, 32);
			   this->button1->TabIndex = 8;
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(44)), static_cast<System::Int32>(static_cast<System::Byte>(44)));
			   this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightCyan;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button2->ForeColor = System::Drawing::Color::White;
			   this->button2->Location = System::Drawing::Point(0, 292);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(899, 58);
			   this->button2->TabIndex = 9;
			   this->button2->Text = L"Accept";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label2->ForeColor = System::Drawing::Color::White;
			   this->label2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label2->Location = System::Drawing::Point(13, 43);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(200, 34);
			   this->label2->TabIndex = 10;
			   this->label2->Text = L"Choose the element in the table\r\nto change its value";
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				   static_cast<System::Int32>(static_cast<System::Byte>(208)));
			   this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.57F));
			   this->textBox1->Location = System::Drawing::Point(16, 106);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(210, 26);
			   this->textBox1->TabIndex = 11;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::Transparent;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label3->ForeColor = System::Drawing::Color::White;
			   this->label3->Location = System::Drawing::Point(232, 108);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(126, 21);
			   this->label3->TabIndex = 12;
			   this->label3->Text = L"Phone Number";
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				   static_cast<System::Int32>(static_cast<System::Byte>(208)));
			   this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.57F));
			   this->textBox2->Location = System::Drawing::Point(16, 164);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(210, 26);
			   this->textBox2->TabIndex = 13;
			   // 
			   // textBox3
			   // 
			   this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				   static_cast<System::Int32>(static_cast<System::Byte>(208)));
			   this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.57F));
			   this->textBox3->Location = System::Drawing::Point(16, 221);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(210, 26);
			   this->textBox3->TabIndex = 14;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::Color::Transparent;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->ForeColor = System::Drawing::Color::White;
			   this->label4->Location = System::Drawing::Point(232, 167);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(58, 21);
			   this->label4->TabIndex = 15;
			   this->label4->Text = L"Name";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->BackColor = System::Drawing::Color::Transparent;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label5->ForeColor = System::Drawing::Color::White;
			   this->label5->Location = System::Drawing::Point(232, 224);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(101, 21);
			   this->label5->TabIndex = 16;
			   this->label5->Text = L"Information";
			   // 
			   // panel2
			   // 
			   this->panel2->BackColor = System::Drawing::Color::Black;
			   this->panel2->Location = System::Drawing::Point(636, 57);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(2, 190);
			   this->panel2->TabIndex = 22;
			   // 
			   // panel1
			   // 
			   this->panel1->BackColor = System::Drawing::Color::Black;
			   this->panel1->Location = System::Drawing::Point(380, 55);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(2, 190);
			   this->panel1->TabIndex = 21;
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->BackColor = System::Drawing::Color::Transparent;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label6->ForeColor = System::Drawing::Color::White;
			   this->label6->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label6->Location = System::Drawing::Point(472, 55);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(71, 20);
			   this->label6->TabIndex = 23;
			   this->label6->Text = L"Previous";
			   this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->BackColor = System::Drawing::Color::Transparent;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label7->ForeColor = System::Drawing::Color::White;
			   this->label7->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label7->Location = System::Drawing::Point(750, 57);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(44, 20);
			   this->label7->TabIndex = 24;
			   this->label7->Text = L"New";
			   this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->BackColor = System::Drawing::Color::Transparent;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label8->ForeColor = System::Drawing::Color::White;
			   this->label8->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label8->Location = System::Drawing::Point(607, 110);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(67, 20);
			   this->label8->TabIndex = 25;
			   this->label8->Text = L"Number";
			   this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->BackColor = System::Drawing::Color::Transparent;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label9->ForeColor = System::Drawing::Color::White;
			   this->label9->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label9->Location = System::Drawing::Point(612, 168);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(53, 20);
			   this->label9->TabIndex = 26;
			   this->label9->Text = L"Name";
			   this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->BackColor = System::Drawing::Color::Transparent;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label10->ForeColor = System::Drawing::Color::White;
			   this->label10->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label10->Location = System::Drawing::Point(593, 225);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(93, 20);
			   this->label10->TabIndex = 27;
			   this->label10->Text = L"Information";
			   this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->BackColor = System::Drawing::Color::Transparent;
			   this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label11->ForeColor = System::Drawing::Color::White;
			   this->label11->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label11->Location = System::Drawing::Point(414, 108);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(84, 22);
			   this->label11->TabIndex = 28;
			   this->label11->Text = L"Number";
			   this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->label11->Visible = false;
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->BackColor = System::Drawing::Color::Transparent;
			   this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label12->ForeColor = System::Drawing::Color::White;
			   this->label12->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label12->Location = System::Drawing::Point(414, 166);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(84, 22);
			   this->label12->TabIndex = 29;
			   this->label12->Text = L"Number";
			   this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->label12->Visible = false;
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->BackColor = System::Drawing::Color::Transparent;
			   this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label13->ForeColor = System::Drawing::Color::White;
			   this->label13->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label13->Location = System::Drawing::Point(414, 223);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(84, 22);
			   this->label13->TabIndex = 30;
			   this->label13->Text = L"Number";
			   this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->label13->Visible = false;
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->BackColor = System::Drawing::Color::Transparent;
			   this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label14->ForeColor = System::Drawing::Color::White;
			   this->label14->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label14->Location = System::Drawing::Point(710, 107);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(84, 22);
			   this->label14->TabIndex = 31;
			   this->label14->Text = L"Number";
			   this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->label14->Visible = false;
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->BackColor = System::Drawing::Color::Transparent;
			   this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label15->ForeColor = System::Drawing::Color::White;
			   this->label15->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label15->Location = System::Drawing::Point(710, 166);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(84, 22);
			   this->label15->TabIndex = 32;
			   this->label15->Text = L"Number";
			   this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->label15->Visible = false;
			   // 
			   // label16
			   // 
			   this->label16->AutoSize = true;
			   this->label16->BackColor = System::Drawing::Color::Transparent;
			   this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label16->ForeColor = System::Drawing::Color::White;
			   this->label16->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->label16->Location = System::Drawing::Point(710, 223);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(84, 22);
			   this->label16->TabIndex = 33;
			   this->label16->Text = L"Number";
			   this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->label16->Visible = false;
			   // 
			   // MyForm3
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				   static_cast<System::Int32>(static_cast<System::Byte>(153)));
			   this->ClientSize = System::Drawing::Size(899, 350);
			   this->Controls->Add(this->label16);
			   this->Controls->Add(this->label15);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->panel2);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->textBox3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"MyForm3";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"MyForm3";
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm3::MyForm3_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			   this->Shown += gcnew System::EventHandler(this, &MyForm3::MyForm3_Shown);
			   this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm3::MyForm3_MouseDown);
			   this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm3::MyForm3_MouseMove);
			   this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm3::MyForm3_MouseUp);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private:
		private: System::Void DoWork2() {
			if (textBox1->Text != "") {
				label14->Visible = true;
				label14->Text = textBox1->Text;
			}
			else {
				label14->Visible = false;
			}
			if (textBox2->Text != "") {
				label15->Visible = true;
				label15->Text = textBox2->Text;
			}
			else {
				label15->Visible = false;
			}
			if (textBox3->Text != "") {
				label16->Visible = true;
				label16->Text = textBox3->Text;
			}
			else {
				label16->Visible = false;
			}
		}

	private: System::Void DoWork() {
		if (!this->IsDisposed) {
			tmp = parentForm->row;
			temp = parentForm->a->get_by_index(tmp);
			label11->Text = Convert::ToString(temp->Key);
			label12->Text = temp->Name;
			label13->Text = temp->Info;

		}
		else
			return;
	}
	private: System::Void Thread_Start() {
		while (!this->IsDisposed) {
			this->Invoke(gcnew Action(this, &MyForm3::DoWork));
			this->Invoke(gcnew Action(this, &MyForm3::DoWork2));
		}
	}
	private: System::Void MyForm3_Shown(System::Object ^ sender, System::EventArgs ^ e) {
			thisThread = gcnew Thread(gcnew ThreadStart(this, &MyForm3::Thread_Start));
			thisThread->Start();
	}
	private: System::Void MyForm3_FormClosing(System::Object ^ sender, System::Windows::Forms::FormClosingEventArgs ^ e) {
		if (thisThread) 
			thisThread->Abort();
	}
};
}
