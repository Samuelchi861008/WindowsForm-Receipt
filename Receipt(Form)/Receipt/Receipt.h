#pragma once
namespace Receipt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Receipt : public System::Windows::Forms::Form
	{
	public:
		Receipt(void)
		{
			InitializeComponent();
		}

	protected:
		~Receipt()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Button^  button3;

	private: System::ComponentModel::IContainer^  components;

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(125, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"發";
			this->label1->Click += gcnew System::EventHandler(this, &Receipt::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(173, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"票";
			this->label2->Click += gcnew System::EventHandler(this, &Receipt::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(229, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"兌";
			this->label3->Click += gcnew System::EventHandler(this, &Receipt::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(298, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"獎";
			this->label4->Click += gcnew System::EventHandler(this, &Receipt::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(355, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 27);
			this->label5->TabIndex = 4;
			this->label5->Text = L"軟";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"標楷體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(404, 80);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"體";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(38, 150);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"本月特別獎：";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(147, 145);
			this->textBox1->MaxLength = 8;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(307, 27);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(53, 198);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 16);
			this->label8->TabIndex = 8;
			this->label8->Text = L"本月特獎：";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox2->Location = System::Drawing::Point(147, 191);
			this->textBox2->MaxLength = 8;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(307, 27);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox3->Location = System::Drawing::Point(147, 240);
			this->textBox3->MaxLength = 8;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(307, 27);
			this->textBox3->TabIndex = 11;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(53, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(93, 16);
			this->label9->TabIndex = 10;
			this->label9->Text = L"本月頭獎：";
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox4->Location = System::Drawing::Point(147, 289);
			this->textBox4->MaxLength = 8;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(307, 27);
			this->textBox4->TabIndex = 12;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox5->Location = System::Drawing::Point(147, 341);
			this->textBox5->MaxLength = 8;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(307, 27);
			this->textBox5->TabIndex = 13;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox6->Location = System::Drawing::Point(147, 386);
			this->textBox6->MaxLength = 3;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(64, 27);
			this->textBox6->TabIndex = 15;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(19, 385);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 16);
			this->label10->TabIndex = 14;
			this->label10->Text = L"本月增開六獎：";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox7->Location = System::Drawing::Point(226, 386);
			this->textBox7->MaxLength = 3;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(64, 27);
			this->textBox7->TabIndex = 16;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox8->Location = System::Drawing::Point(308, 386);
			this->textBox8->MaxLength = 3;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(64, 27);
			this->textBox8->TabIndex = 17;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox9->Location = System::Drawing::Point(390, 386);
			this->textBox9->MaxLength = 3;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(64, 27);
			this->textBox9->TabIndex = 18;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 19;
			this->button1->Text = L"全部清除";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Receipt::button1_Click);
			// 
			// textBox10
			// 
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox10->Location = System::Drawing::Point(146, 497);
			this->textBox10->MaxLength = 8;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(307, 27);
			this->textBox10->TabIndex = 21;
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"標楷體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(20, 499);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 16);
			this->label11->TabIndex = 20;
			this->label11->Text = L"您發票號碼：";
			this->label11->Click += gcnew System::EventHandler(this, &Receipt::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(-1, 515);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(143, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"(只需輸入數字部分)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label13->Location = System::Drawing::Point(220, 639);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(135, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"©Samuel Chi 2017";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label14->Location = System::Drawing::Point(26, 401);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 13);
			this->label14->TabIndex = 24;
			this->label14->Text = L"(沒有可空白)";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->label15->Location = System::Drawing::Point(38, 626);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(510, 13);
			this->label15->TabIndex = 25;
			this->label15->Text = L"※請注意:若因輸入錯誤或未按本軟體規定輸入而導致未中獎本軟體恕不負責";
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(469, 497);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 26);
			this->button2->TabIndex = 26;
			this->button2->Text = L"兌獎";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Receipt::button2_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"標楷體", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label16->Location = System::Drawing::Point(64, 562);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(102, 21);
			this->label16->TabIndex = 27;
			this->label16->Text = L"恭喜您！";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label17->Location = System::Drawing::Point(534, 10);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 13);
			this->label17->TabIndex = 28;
			this->label17->Text = L"V1.0";
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"標楷體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(500, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 44);
			this->button3->TabIndex = 29;
			this->button3->Text = L"獎號查詢";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Receipt::button3_Click);
			// 
			// Receipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(584, 661);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Receipt";
			this->Text = L"發票兌獎軟體";
			this->Load += gcnew System::EventHandler(this, &Receipt::Receipt_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Receipt_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (this->textBox10->Text->Length == 0 && this->textBox1->Text->Length == 0 && this->textBox2->Text->Length == 0 &&
		this->textBox3->Text->Length == 0 && this->textBox4->Text->Length == 0 && this->textBox5->Text->Length == 0 &&
		this->textBox6->Text->Length == 0 && this->textBox7->Text->Length == 0 && this->textBox8->Text->Length == 0 &&
		this->textBox9->Text->Length == 0 && this->textBox10->Text->Length == 0)
	{
		this->label16->Text = "您尚未輸入任何資料！";
		this->label16->Location = System::Drawing::Point(180, 562);
		this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	else if (this->textBox10->Text->Length == 0 || this->textBox1->Text->Length == 0 || this->textBox2->Text->Length == 0 ||
		this->textBox3->Text->Length == 0 || this->textBox4->Text->Length == 0 || this->textBox5->Text->Length == 0)
	{
		this->label16->Text = "特別獎、特獎、頭獎以及您的發票號碼不可有任一空白！";
		this->label16->Location = System::Drawing::Point(10, 562);
		this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	else if (this->textBox10->Text->Length != 8 || this->textBox1->Text->Length != 8 || this->textBox2->Text->Length != 8 ||
		this->textBox3->Text->Length != 8 || this->textBox4->Text->Length != 8 || this->textBox5->Text->Length != 8)
	{
		this->label16->Text = "再檢查看看\n特別獎、特獎、頭獎以及您的發票號碼都要滿8位數喔！";
		this->label16->Location = System::Drawing::Point(1, 562);
		this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	else if (this->textBox10->Text == this->textBox1->Text)
	{
		this->label16->Text = "恭喜您！您中了特別獎，新台幣$1,000萬元";
		this->label16->Location = System::Drawing::Point(64, 562);
		this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	else if (this->textBox10->Text == this->textBox2->Text)
	{
		this->label16->Text = "恭喜您！您中了特獎，新台幣$200萬元";
		this->label16->Location = System::Drawing::Point(85, 562);
		this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	else if (System::String::Compare(this->textBox10->Text,5, this->textBox6->Text,0,3) == 0 ||
			System::String::Compare(this->textBox10->Text, 5, this->textBox7->Text, 0, 3) == 0 ||
			System::String::Compare(this->textBox10->Text, 5, this->textBox8->Text, 0, 3) == 0 ||
			System::String::Compare(this->textBox10->Text, 5, this->textBox9->Text, 0, 3) == 0)
	{
		this->label16->Text = "恭喜您！您中了增開六獎，新台幣$200元";
		this->label16->Location = System::Drawing::Point(85, 562);
		this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));
	}
	else
	{
		if (System::String::Compare(this->textBox10->Text, 5, this->textBox3->Text, 5, 8) == 0 ||
			System::String::Compare(this->textBox10->Text, 5, this->textBox4->Text, 5, 8) == 0 ||
			System::String::Compare(this->textBox10->Text, 5, this->textBox5->Text, 5, 8) == 0 )
		{
			if (System::String::Compare(this->textBox10->Text, 4, this->textBox3->Text, 4, 8) == 0 ||
				System::String::Compare(this->textBox10->Text, 4, this->textBox4->Text, 4, 8) == 0 ||
				System::String::Compare(this->textBox10->Text, 4, this->textBox5->Text, 4, 8) == 0)
			{
				if (System::String::Compare(this->textBox10->Text, 3, this->textBox3->Text, 3, 8) == 0 ||
					System::String::Compare(this->textBox10->Text, 3, this->textBox4->Text, 3, 8) == 0 ||
					System::String::Compare(this->textBox10->Text, 3, this->textBox5->Text, 3, 8) == 0)
				{
					if (System::String::Compare(this->textBox10->Text, 2, this->textBox3->Text, 2, 8) == 0 ||
						System::String::Compare(this->textBox10->Text, 2, this->textBox4->Text, 2, 8) == 0 ||
						System::String::Compare(this->textBox10->Text, 2, this->textBox5->Text, 2, 8) == 0)
					{
						if (System::String::Compare(this->textBox10->Text, 1, this->textBox3->Text, 1, 8) == 0 ||
							System::String::Compare(this->textBox10->Text, 1, this->textBox4->Text, 1, 8) == 0 ||
							System::String::Compare(this->textBox10->Text, 1, this->textBox5->Text, 1, 8) == 0)
						{
							if (this->textBox10->Text == this->textBox3->Text ||
								this->textBox10->Text == this->textBox4->Text ||
								this->textBox10->Text == this->textBox5->Text)
							{
								this->label16->Text = "恭喜您！您中了頭獎，新台幣$200,000元";
								this->label16->Location = System::Drawing::Point(63, 562);
								this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(0)),
									static_cast<System::Int32>(static_cast<System::Byte>(0)));
							}
							else
							{
								this->label16->Text = "恭喜您！您中了二獎，新台幣$40,000元";
								this->label16->Location = System::Drawing::Point(100, 562);
								this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
									static_cast<System::Int32>(static_cast<System::Byte>(0)),
									static_cast<System::Int32>(static_cast<System::Byte>(0)));
							}							
						}
						else
						{
							this->label16->Text = "恭喜您！您中了三獎，新台幣$10,000元";
							this->label16->Location = System::Drawing::Point(64, 562);
							this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
								static_cast<System::Int32>(static_cast<System::Byte>(0)),
								static_cast<System::Int32>(static_cast<System::Byte>(0)));
						}
						
					}
					else
					{
						this->label16->Text = "恭喜您！您中了四獎，新台幣$4,000元";
						this->label16->Location = System::Drawing::Point(65, 562);
						this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					
				}
				else
				{
					this->label16->Text = "恭喜您！您中了五獎，新台幣$1,000元";
					this->label16->Location = System::Drawing::Point(65, 562);
					this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else
			{
				this->label16->Text = "恭喜您！您中了六獎，新台幣$200元";
				this->label16->Location = System::Drawing::Point(100, 562);
				this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
		}
		else
		{
			this->label16->Text = "很可惜！沒有中獎，再接再厲吧！";
			this->label16->Location = System::Drawing::Point(115, 562);
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
		}
	}
	this->textBox10->Text = "";
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->textBox4->Text = "";
	this->textBox5->Text = "";
	this->textBox6->Text = "";
	this->textBox7->Text = "";
	this->textBox8->Text = "";
	this->textBox9->Text = "";
	this->textBox10->Text = "";
	this->label16->Text = "";
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Diagnostics::Process::Start("http://service.etax.nat.gov.tw/etw-main/front/ETW183W1/");
}
};
}
