#pragma once
#include "Header.h"
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <vector>
#include <algorithm>

using namespace std;
using namespace System;
//using namespace System;


//void MarshalString(System::String^ s, std::string& os) {
//	using namespace System::Runtime::InteropServices;
//	const char* chars =
//		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
//	os = chars;
//	Marshal::FreeHGlobal(IntPtr((void*)chars));
//}


vector<Product> vec;
vector<Product> vec_temp;



namespace Project1 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button2;







	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;







	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;














	protected:

	protected:





	public:
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Location = System::Drawing::Point(350, 100);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.4F));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1005, 600);
			this->dataGridView1->StandardTab = true;
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellEndEdit);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(107, 151);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 49);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Удалить строку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(39, 219);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 49);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Из файла...";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(172, 219);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 49);
			this->button3->TabIndex = 10;
			this->button3->Text = L"В файл...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Location = System::Drawing::Point(12, 365);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(332, 190);
			this->panel1->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(121, 10);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 29);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Поиск";
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(16, 122);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 54);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(191, 125);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(109, 49);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Поиск";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(187, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Значение";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Столбец";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(134, 22);
			this->textBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Адрес", L"Номер склада", L"Фирма", L"Объем поставок",
					L"Кол-во товара", L"Код товара", L"Название товара"
			});
			this->comboBox1->Location = System::Drawing::Point(16, 77);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(159, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Выберите...";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->radioButton2);
			this->panel2->Controls->Add(this->radioButton1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->comboBox2);
			this->panel2->Location = System::Drawing::Point(12, 561);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(332, 228);
			this->panel2->TabIndex = 13;
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(191, 146);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(109, 49);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Сортировать";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(90, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 29);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Сортировка";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(16, 174);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(117, 21);
			this->radioButton2->TabIndex = 9;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"По убыванию";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(16, 146);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(137, 21);
			this->radioButton1->TabIndex = 8;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"По возрастанию";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(23, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Столбец";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Адрес", L"Номер склада", L"Фирма", L"Объем поставок",
					L"Кол-во товара", L"Код товара", L"Название товара"
			});
			this->comboBox2->Location = System::Drawing::Point(16, 95);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(159, 24);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->Text = L"Выберите...";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(350, 26);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(295, 38);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Товары на складе";
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(1356, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(114, 53);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// Column1
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"Адрес";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Номер склада";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Фирма";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Объем поставок";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Кол-во товара";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Код товара";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Название товара";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1482, 953);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Location = System::Drawing::Point(200, 50);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"База Данных";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (this->dataGridView1->RowCount > vec.size() + 1) {
			Product temp;
			vec.push_back(temp);
		}
		vector<Product>::iterator it;
		it = vec.begin();
		advance(it, this->dataGridView1->CurrentRow->Index);
		System::String^ managed;
		string s;
		if (this->dataGridView1->CurrentRow->Cells[0]->Value != nullptr) {
			managed = this->dataGridView1->CurrentRow->Cells[0]->Value->ToString();
			s = msclr::interop::marshal_as<std::string>(managed);
			it->Building::Set(s);
		}
		if (this->dataGridView1->CurrentRow->Cells[1]->Value != nullptr) {
			managed = this->dataGridView1->CurrentRow->Cells[1]->Value->ToString();
			s = tostr(managed);
			it->Warehouse::Set(s);
		}
		if (this->dataGridView1->CurrentRow->Cells[2]->Value != nullptr) {
			managed = this->dataGridView1->CurrentRow->Cells[2]->Value->ToString();
			s = tostr(managed);
			it->SetFirm(s);
		}
		if (this->dataGridView1->CurrentRow->Cells[3]->Value != nullptr) {
			managed = this->dataGridView1->CurrentRow->Cells[3]->Value->ToString();
			s = tostr(managed);
			it->SetCount_del(s);
		}
		if (this->dataGridView1->CurrentRow->Cells[4]->Value != nullptr) {
			managed = this->dataGridView1->CurrentRow->Cells[4]->Value->ToString();
			s = tostr(managed);
			it->SetCount(s);
		}
		if (this->dataGridView1->CurrentRow->Cells[5]->Value != nullptr) {
			managed = this->dataGridView1->CurrentRow->Cells[5]->Value->ToString();
			s = tostr(managed);
			it->SetPassword(s);
		}
		if (this->dataGridView1->CurrentRow->Cells[6]->Value != nullptr) {
			managed = this->dataGridView1->CurrentRow->Cells[6]->Value->ToString();
			s = tostr(managed);
			it->SetName(s);
		}


		/*ofstream out("text.txt");
		for (it = vec.begin(); it != vec.end(); it++) {
			out << *it;
		}
		out.close();*/
		
		//System::String^ managed = this->dataGridView1->CurrentRow->Cells[0]->Value->ToString();
		//std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
		//obj.address = unmanaged;
		//out << obj.address << endl;
		//out << this->dataGridView1->RowCount << endl;
		//out << vec.size();
	
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (vec_temp.empty()) {
		int n = this->dataGridView1->CurrentRow->Index;
		vector<Product>::iterator it;
		it = vec.begin();
		if (vec.size() > n) {
			advance(it, n);
			vec.erase(it);

			this->dataGridView1->Rows->RemoveAt(n);
		}
	}
	else {
		int n = this->dataGridView1->CurrentRow->Index;
		vector<Product>::iterator it_temp;
		vector<Product>::iterator it = vec.begin();
		it_temp = vec_temp.begin();
		if (vec_temp.size() > n) {
			advance(it_temp, n);
			for (int i = 0; it != vec.end(); i++) {
				if (*it == *it_temp) {
					vec.erase(it);
					break;
				}
				it++;
			}
			vec_temp.erase(it_temp);

			this->dataGridView1->Rows->RemoveAt(n);
		}
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	vec.clear();
	ifstream in("in.txt");
	while (!in.eof()) {
		Product temp;
		in >> temp;
		vec.push_back(temp);
	}
	in.close();
	int n = this->dataGridView1->RowCount;
	for (int i = 0; i < n - 1; i++) {
		this->dataGridView1->Rows->RemoveAt(0);
	}

	string* s;
	vector<Product>::iterator it = vec.begin();
	Product temp;
	

	for (int i = 0; it != vec.end(); i++) {
		this->dataGridView1->Rows->Add();
		s = it->GetAll();
		for (int j = 0; j < 7; j++) {
			System::String^ str = gcnew String(s[j].c_str());
			this->dataGridView1->Rows[i]->Cells[j]->Value = str;
		}
		it++;
		delete[] s;
	}

}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Product>::iterator it;
		ofstream out("out.txt");
		for (it = vec.begin(); it != vec.end(); it++) {
			out << *it;
		}
		out.close();
		MessageBox::Show("Сохранено!\nФайл: out.txt\n");

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->Visible = true;
}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		int x = this->comboBox1->SelectedIndex;
		vec_temp.clear();
		vector<Product>::iterator it = vec.begin();
		//vector<Product, int>::iterator it_temp = vec_temp.begin();
		System::String^ q_sys = this->textBox1->Text;
		string q = tostr(q_sys);
		if (x == 0) {
			string s;
			for (int i = 0; i < vec.size(); i++) {
				s = it->GetAddress();
				if (compared(s, q)) {
					vec_temp.push_back(*it);
				}
				it++;
			}
		}
		else if (x == 1) {
			string s;
			for (int i = 0; i < vec.size(); i++) {
				s = it->GetNumber();
				if (compared(s, q)) {
					vec_temp.push_back(*it);
				}
				it++;
			}
		}
		else if (x == 2) {
			string s;
			for (int i = 0; i < vec.size(); i++) {
				s = it->GetFirm();
				if (compared(s, q)) {
					vec_temp.push_back(*it);
				}
				it++;
			}
		}
		else if (x == 3) {
			string s;
			for (int i = 0; i < vec.size(); i++) {
				s = it->GetCount_del();
				if (compared(s, q)) {
					vec_temp.push_back(*it);
				}
				it++;
			}
		}
		else if (x == 4) {
			string s;
			for (int i = 0; i < vec.size(); i++) {
				s = it->GetCount();
				if (compared(s, q)) {
					vec_temp.push_back(*it);
				}
				it++;
			}
		}
		else if (x == 5) {
			string s;
			for (int i = 0; i < vec.size(); i++) {
				s = it->GetPassword();
				if (compared(s, q)) {
					vec_temp.push_back(*it);
				}
				it++;
			}
		}
		else if (x == 6) {
			string s;
			for (int i = 0; i < vec.size(); i++) {
				s = it->GetName();
				if (compared(s, q)) {
					vec_temp.push_back(*it);
				}
				it++;
			}
		}
		




		int n = this->dataGridView1->RowCount;
		for (int i = 0; i < n - 1; i++) {
			this->dataGridView1->Rows->RemoveAt(0);
		}

		string* s;
		vector<Product>::iterator it_temp = vec_temp.begin();
		for (int i = 0; i < vec_temp.size(); i++) {
			this->dataGridView1->Rows->Add();
			s = it_temp->GetAll();
			for (int j = 0; j < 7; j++) {
				System::String^ str = gcnew String(s[j].c_str());
				this->dataGridView1->Rows[i]->Cells[j]->Value = str;
			}
			it_temp++;
			delete[] s;
		}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	vec_temp.clear();
	int n = this->dataGridView1->RowCount;
	for (int i = 0; i < n - 1; i++) {
		this->dataGridView1->Rows->RemoveAt(0);
	}
	

	string* s;
	vector<Product>::iterator it = vec.begin();
	for (int i = 0; it != vec.end(); i++) {
		this->dataGridView1->Rows->Add();
		s = it->GetAll();
		for (int j = 0; j < 7; j++) {
			System::String^ str = gcnew String(s[j].c_str());
			this->dataGridView1->Rows[i]->Cells[j]->Value = str;
		}
		it++;
		delete[] s;
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if ((!this->radioButton1->Checked) && (!this->radioButton2->Checked))
			throw 1;
	}
	catch (int) {
		MessageBox::Show("Выберите тип сортировки!\n");
	}
	int x = this->comboBox2->SelectedIndex;
	bool q1 = this->radioButton1->Checked;
	bool q2 = this->radioButton2->Checked;
	vector<Product>::iterator it = vec.begin();
	if (x == 0) {
		if (q1)
			sort(vec.begin(), vec.end(), CompareAddressUp);
		else if (q2)
			sort(vec.begin(), vec.end(), CompareAddressDown);
	}
	else if (x == 1) {
		if (q1)
			sort(vec.begin(), vec.end(), CompareNumberUp);
		else if (q2)
			sort(vec.begin(), vec.end(), CompareNumberDown);
	}
	else if (x == 2) {
		if (q1)
			sort(vec.begin(), vec.end(), CompareFirmUp);
		else if (q2)
			sort(vec.begin(), vec.end(), CompareFirmDown);
	}
	else if (x == 3) {
		if (q1)
			sort(vec.begin(), vec.end(), CompareCount_delUp);
		else if (q2)
			sort(vec.begin(), vec.end(), CompareCount_delDown);
	}
	else if (x == 4) {
		if (q1)
			sort(vec.begin(), vec.end(), CompareCountUp);
		else if (q2)
			sort(vec.begin(), vec.end(), CompareCountDown);
	}
	else if (x == 5) {
		if (q1)
			sort(vec.begin(), vec.end(), ComparePasswordUp);
		else if (q2)
			sort(vec.begin(), vec.end(), ComparePasswordDown);
	}
	else if (x == 6) {
		if (q1)
			sort(vec.begin(), vec.end(), CompareNameUp);
		else if (q2)
			sort(vec.begin(), vec.end(), CompareNameDown);
	}



	int n = this->dataGridView1->RowCount;
	for (int i = 0; i < n - 1; i++) {
		this->dataGridView1->Rows->RemoveAt(0);
	}

	string* s;
	it = vec.begin();
	for (int i = 0; i < vec.size(); i++) {
		this->dataGridView1->Rows->Add();
		s = it->GetAll();
		for (int j = 0; j < 7; j++) {
			System::String^ str = gcnew String(s[j].c_str());
			this->dataGridView1->Rows[i]->Cells[j]->Value = str;
		}
		it++;
		delete[] s;
	}

}
private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	exit(0);
}

};
}


