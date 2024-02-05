#pragma once

namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Pow;
	protected:

	protected:
		double x = 0, y = 0; char op = '+';
	private: System::Windows::Forms::TextBox^ Result;
	private: System::Windows::Forms::Button^ Sqrt;
	protected:


	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ Div;
	private: System::Windows::Forms::Button^ Mul;




	private: System::Windows::Forms::Button^ Minus;

	private: System::Windows::Forms::Button^ Plus;
	private: System::Windows::Forms::Button^ Equal;


	private: System::Windows::Forms::Button^ Nine;
	private: System::Windows::Forms::Button^ Eight;
	private: System::Windows::Forms::Button^ Seven;



	private: System::Windows::Forms::Button^ Six;
	private: System::Windows::Forms::Button^ Five;
	private: System::Windows::Forms::Button^ Four;



	private: System::Windows::Forms::Button^ Three;
	private: System::Windows::Forms::Button^ Two;
	private: System::Windows::Forms::Button^ One;



	private: System::Windows::Forms::Button^ Zero;
	private: System::Windows::Forms::Button^ Point;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Pow = (gcnew System::Windows::Forms::Button());
			this->Result = (gcnew System::Windows::Forms::TextBox());
			this->Sqrt = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->Div = (gcnew System::Windows::Forms::Button());
			this->Mul = (gcnew System::Windows::Forms::Button());
			this->Minus = (gcnew System::Windows::Forms::Button());
			this->Plus = (gcnew System::Windows::Forms::Button());
			this->Equal = (gcnew System::Windows::Forms::Button());
			this->Nine = (gcnew System::Windows::Forms::Button());
			this->Eight = (gcnew System::Windows::Forms::Button());
			this->Seven = (gcnew System::Windows::Forms::Button());
			this->Six = (gcnew System::Windows::Forms::Button());
			this->Five = (gcnew System::Windows::Forms::Button());
			this->Four = (gcnew System::Windows::Forms::Button());
			this->Three = (gcnew System::Windows::Forms::Button());
			this->Two = (gcnew System::Windows::Forms::Button());
			this->One = (gcnew System::Windows::Forms::Button());
			this->Zero = (gcnew System::Windows::Forms::Button());
			this->Point = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Pow
			// 
			this->Pow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pow->Location = System::Drawing::Point(11, 93);
			this->Pow->Name = L"Pow";
			this->Pow->Size = System::Drawing::Size(59, 43);
			this->Pow->TabIndex = 0;
			this->Pow->Text = L"x²";
			this->Pow->UseVisualStyleBackColor = true;
			this->Pow->Click += gcnew System::EventHandler(this, &MyForm::Pow_Click);
			// 
			// Result
			// 
			this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result->Location = System::Drawing::Point(11, 12);
			this->Result->Multiline = true;
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(252, 65);
			this->Result->TabIndex = 1;
			this->Result->Text = L"0";
			this->Result->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Result->TextChanged += gcnew System::EventHandler(this, &MyForm::Result_TextChanged);
			this->Result->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Result_KeyPress);
			// 
			// Sqrt
			// 
			this->Sqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sqrt->Location = System::Drawing::Point(208, 141);
			this->Sqrt->Name = L"Sqrt";
			this->Sqrt->Size = System::Drawing::Size(59, 43);
			this->Sqrt->TabIndex = 2;
			this->Sqrt->Text = L"√x";
			this->Sqrt->UseVisualStyleBackColor = true;
			this->Sqrt->Click += gcnew System::EventHandler(this, &MyForm::Sqrt_Click);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear->Location = System::Drawing::Point(11, 286);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(59, 43);
			this->Clear->TabIndex = 3;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// Delete
			// 
			this->Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delete->Location = System::Drawing::Point(208, 93);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(59, 43);
			this->Delete->TabIndex = 4;
			this->Delete->Text = L"⌫";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &MyForm::Delete_Click);
			// 
			// Div
			// 
			this->Div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Div->Location = System::Drawing::Point(141, 93);
			this->Div->Name = L"Div";
			this->Div->Size = System::Drawing::Size(59, 43);
			this->Div->TabIndex = 5;
			this->Div->Text = L"÷";
			this->Div->UseVisualStyleBackColor = true;
			this->Div->Click += gcnew System::EventHandler(this, &MyForm::Div_Click);
			// 
			// Mul
			// 
			this->Mul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Mul->Location = System::Drawing::Point(77, 93);
			this->Mul->Name = L"Mul";
			this->Mul->Size = System::Drawing::Size(59, 43);
			this->Mul->TabIndex = 6;
			this->Mul->Text = L"✖";
			this->Mul->UseVisualStyleBackColor = true;
			this->Mul->Click += gcnew System::EventHandler(this, &MyForm::Mul_Click);
			// 
			// Minus
			// 
			this->Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Minus->Location = System::Drawing::Point(208, 237);
			this->Minus->Name = L"Minus";
			this->Minus->Size = System::Drawing::Size(59, 43);
			this->Minus->TabIndex = 7;
			this->Minus->Text = L"−";
			this->Minus->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Minus->UseVisualStyleBackColor = true;
			this->Minus->Click += gcnew System::EventHandler(this, &MyForm::Minus_Click);
			// 
			// Plus
			// 
			this->Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Plus->Location = System::Drawing::Point(208, 189);
			this->Plus->Name = L"Plus";
			this->Plus->Size = System::Drawing::Size(59, 43);
			this->Plus->TabIndex = 8;
			this->Plus->Text = L"＋";
			this->Plus->UseVisualStyleBackColor = true;
			this->Plus->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// Equal
			// 
			this->Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Equal->Location = System::Drawing::Point(208, 283);
			this->Equal->Name = L"Equal";
			this->Equal->Size = System::Drawing::Size(59, 43);
			this->Equal->TabIndex = 9;
			this->Equal->Text = L"＝";
			this->Equal->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->Equal->UseVisualStyleBackColor = true;
			this->Equal->Click += gcnew System::EventHandler(this, &MyForm::Equal_Click);
			// 
			// Nine
			// 
			this->Nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Nine->Location = System::Drawing::Point(141, 141);
			this->Nine->Name = L"Nine";
			this->Nine->Size = System::Drawing::Size(59, 43);
			this->Nine->TabIndex = 10;
			this->Nine->Text = L"9";
			this->Nine->UseVisualStyleBackColor = true;
			this->Nine->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Eight
			// 
			this->Eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Eight->Location = System::Drawing::Point(77, 141);
			this->Eight->Name = L"Eight";
			this->Eight->Size = System::Drawing::Size(59, 43);
			this->Eight->TabIndex = 11;
			this->Eight->Text = L"8";
			this->Eight->UseVisualStyleBackColor = true;
			this->Eight->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Seven
			// 
			this->Seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Seven->Location = System::Drawing::Point(11, 141);
			this->Seven->Name = L"Seven";
			this->Seven->Size = System::Drawing::Size(59, 43);
			this->Seven->TabIndex = 12;
			this->Seven->Text = L"7";
			this->Seven->UseVisualStyleBackColor = true;
			this->Seven->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Six
			// 
			this->Six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Six->Location = System::Drawing::Point(141, 189);
			this->Six->Name = L"Six";
			this->Six->Size = System::Drawing::Size(59, 43);
			this->Six->TabIndex = 13;
			this->Six->Text = L"6";
			this->Six->UseVisualStyleBackColor = true;
			this->Six->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Five
			// 
			this->Five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Five->Location = System::Drawing::Point(77, 189);
			this->Five->Name = L"Five";
			this->Five->Size = System::Drawing::Size(59, 43);
			this->Five->TabIndex = 14;
			this->Five->Text = L"5";
			this->Five->UseVisualStyleBackColor = true;
			this->Five->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Four
			// 
			this->Four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Four->Location = System::Drawing::Point(11, 189);
			this->Four->Name = L"Four";
			this->Four->Size = System::Drawing::Size(59, 43);
			this->Four->TabIndex = 15;
			this->Four->Text = L"4";
			this->Four->UseVisualStyleBackColor = true;
			this->Four->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Three
			// 
			this->Three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Three->Location = System::Drawing::Point(141, 237);
			this->Three->Name = L"Three";
			this->Three->Size = System::Drawing::Size(59, 43);
			this->Three->TabIndex = 16;
			this->Three->Text = L"3";
			this->Three->UseVisualStyleBackColor = true;
			this->Three->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Two
			// 
			this->Two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Two->Location = System::Drawing::Point(77, 237);
			this->Two->Name = L"Two";
			this->Two->Size = System::Drawing::Size(59, 43);
			this->Two->TabIndex = 17;
			this->Two->Text = L"2";
			this->Two->UseVisualStyleBackColor = true;
			this->Two->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// One
			// 
			this->One->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->One->Location = System::Drawing::Point(11, 237);
			this->One->Name = L"One";
			this->One->Size = System::Drawing::Size(59, 43);
			this->One->TabIndex = 18;
			this->One->Text = L"1";
			this->One->UseVisualStyleBackColor = true;
			this->One->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Zero
			// 
			this->Zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Zero->Location = System::Drawing::Point(77, 283);
			this->Zero->Name = L"Zero";
			this->Zero->Size = System::Drawing::Size(59, 43);
			this->Zero->TabIndex = 19;
			this->Zero->Text = L"0";
			this->Zero->UseVisualStyleBackColor = true;
			this->Zero->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// Point
			// 
			this->Point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Point->Location = System::Drawing::Point(141, 283);
			this->Point->Name = L"Point";
			this->Point->Size = System::Drawing::Size(59, 43);
			this->Point->TabIndex = 20;
			this->Point->Text = L",";
			this->Point->UseVisualStyleBackColor = true;
			this->Point->Click += gcnew System::EventHandler(this, &MyForm::Button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(275, 336);
			this->Controls->Add(this->Point);
			this->Controls->Add(this->Zero);
			this->Controls->Add(this->One);
			this->Controls->Add(this->Two);
			this->Controls->Add(this->Three);
			this->Controls->Add(this->Four);
			this->Controls->Add(this->Five);
			this->Controls->Add(this->Six);
			this->Controls->Add(this->Seven);
			this->Controls->Add(this->Eight);
			this->Controls->Add(this->Nine);
			this->Controls->Add(this->Equal);
			this->Controls->Add(this->Plus);
			this->Controls->Add(this->Minus);
			this->Controls->Add(this->Mul);
			this->Controls->Add(this->Div);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->Sqrt);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->Pow);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(293, 383);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(293, 383);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Result->Text = "0";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(Result->Text);
		op = '+';
		Result->Text = "0";
	}
	private: System::Void Result_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Result_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if ((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') && ((((TextBox^)sender)->Text)->IndexOf(",") < 0)) {
			e->Handled = false;
		}
		else
		{
			e->Handled = true;
		}
	}
	private: System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((Result->Text == "0") && (((Button^)sender)->Text != ",")) {
			Result->Text = "";
		}
		if (((Button^)sender)->Text == "," && (Result->Text)->IndexOf(",") >= 0)
		{
			return;
		}
		Result->Text += ((Button^)sender)->Text;
	}
	private: System::Void Equal_Click(System::Object^ sender, System::EventArgs^ e) {
		y = Convert::ToDouble(Result->Text);
		double z;

		switch (op)
		{

		case '-':
			z = x - y;
			break;
		case '+':
			z = x + y;
			break;
		case '/':
			z = x / y;
			break;
		case '*':
			z = x * y;
			break;

		default:
			break;
		}
		Result->Text = Convert::ToString(z);
	}
	private: System::Void Pow_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(Result->Text);
		double z;
		z = x * x;
		Result->Text = Convert::ToString(z);
	}
	private: System::Void Sqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(Result->Text);
		double z;
		z = Math::Sqrt(x);
		Result->Text = Convert::ToString(z);
	}
	private: System::Void Minus_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(Result->Text);
		op = '-';
		Result->Text = "0";
	}
	private: System::Void Div_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(Result->Text);
		op = '/';
		Result->Text = "0";
	}
	private: System::Void Mul_Click(System::Object^ sender, System::EventArgs^ e) {
		x = Convert::ToDouble(Result->Text);
		op = '*';
		Result->Text = "0";
	}
	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Result->Text->Length > 0) {
			Result->Text = Result->Text->Substring(0, Result->Text->Length - 1);
			if (Result->Text->Length == 0)
				Result->Text = "0";
		}
	}
	};
}