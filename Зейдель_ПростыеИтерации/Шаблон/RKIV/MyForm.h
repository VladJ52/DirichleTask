#pragma once
#define _USE_MATH_DEFINES

#include <vector>
#include <math.h>
#include <string>

namespace RKIV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;


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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label17;



	protected:













	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveBorder;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(709, 356);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1119, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Тестовая";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(908, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(52, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"8";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(908, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(52, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"8";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(745, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Число разбиений по Х";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(745, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Число разбиений по У";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(908, 101);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(52, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"1e-8";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(745, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Точность";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(745, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Ограничение шагов";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(908, 137);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(52, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"500";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 421);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Достигнутая точность = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 392);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(264, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"На решение затрачено N =   итераций";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(9, 450);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"max|v-u|=";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(612, 374);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 35);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(748, 234);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Вывести таблицы:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(751, 255);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 17);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Для тестовой";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(754, 276);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(63, 21);
			this->radioButton1->TabIndex = 16;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"v(x,y)";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(754, 304);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(64, 21);
			this->radioButton2->TabIndex = 17;
			this->radioButton2->Text = L"u(x,y)";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(754, 332);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(55, 21);
			this->radioButton3->TabIndex = 18;
			this->radioButton3->Text = L"|v-u|";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(12, 13);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(709, 355);
			this->dataGridView2->TabIndex = 19;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(13, 13);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(708, 355);
			this->dataGridView3->TabIndex = 20;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1234, 381);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 39);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Основная";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 473);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(406, 17);
			this->label10->TabIndex = 22;
			this->label10->Text = L"На решение с половинным шагом затрачено N2 = итераций";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 501);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(298, 17);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Достигнутая точность с половинным шагом";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(908, 255);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 17);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Для основной";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(908, 276);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(63, 21);
			this->radioButton4->TabIndex = 25;
			this->radioButton4->Text = L"v(x,y)";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(908, 304);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(71, 21);
			this->radioButton5->TabIndex = 26;
			this->radioButton5->Text = L"v2(x,y)";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(908, 332);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(62, 21);
			this->radioButton6->TabIndex = 27;
			this->radioButton6->Text = L"|v-v2|";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1002, 392);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(111, 17);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Метод Зейделя";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(855, 433);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(254, 34);
			this->label14->TabIndex = 29;
			this->label14->Text = L"          Метод простой итерации\nс чебышевским набором параметров";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1119, 433);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 33);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Тестовая";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1235, 433);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 32);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Основная";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(979, 13);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 17);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Параметр метода k";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1119, 10);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(43, 22);
			this->textBox5->TabIndex = 33;
			this->textBox5->Text = L"2";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(979, 55);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(127, 17);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Оптимальный k = ";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1119, 486);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(215, 32);
			this->button6->TabIndex = 35;
			this->button6->Text = L"Выр. область";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(10, 527);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(75, 17);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Невязка =";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1375, 562);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double func(double x, double y) 
		{
			double res = (-2 * y * y) *cos(2 * x*y*y)*(pow(y, 2) + 4 * x*x) - 2 * x * sin(2 * x*y*y);
			return res;
		}
		double osnfunc(double x, double y)
		{
			return cosh(x - y);
		}
		double FindChebyshevParam(double Tau0, double Rho0, double Mu)
		{
			double Tau;
			Tau = Tau0 / (1 + Rho0 * Mu);
			return Tau;
		}

		// =============================================================================================
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace std;
		label10->Visible = false;
		label11->Visible = false;
		dataGridView2->Visible = false;
		dataGridView3->Visible = false;
		int n = Convert::ToInt32(textBox1->Text);
		int m = Convert::ToInt32(textBox2->Text);
		double eps = Convert::ToDouble(textBox3->Text);
		int control = Convert::ToInt32(textBox4->Text);
		double h = (double)3 / n, tau = (double)1 / m;
		double maxmax = 0.0;
		n++; m++;
		vector<vector<double>> V(n,vector<double>(m));
		double x = 0.0, y = 0.0;
		double A = -2 * (1 / pow(h, 2) + 1 / pow(tau, 2));
		double Vs = 0.0;
		double maxeps = 10.0;
		int s = 0;
		for (int i = 0; i < n; i++)
		{
			V[i][m-1] = pow(sin(x),2);
			x += h;
		}
		for (int i = 0; i < m; i++)
		{
			V[n-1][i] = pow(sin(3 * y*y), 2);
			y += tau;
		}
		x = y = 0.0;
		while (eps < maxeps && s < control)
		{
			x = y = 0.0;
			maxeps = 0.0;
			x += h;
			for (int j = 1; j < m - 1; j++)
			{
				y += tau;
				x = 0.0;
				for (int i = 1; i < n - 1; i++)
				{
					x += h;
					Vs = V[i][j];
					V[i][j] = (1 / A) * (-func(x, y) - (1 / pow(h, 2))*(V[i - 1][j] + V[i + 1][j]) - (1 / pow(tau, 2)) * (V[i][j - 1] + V[i][j + 1]));
					if (fabs(Vs - V[i][j]) > maxeps)
						maxeps = fabs(Vs - V[i][j]);
				}
			}
			s++;
		}
		dataGridView1->Columns->Add("Column1", " ");
		dataGridView1->Columns->Add("Col2", " ");
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[1]->Value = "i";
		dataGridView1->Rows[1]->Cells[0]->Value = "j";
		dataGridView1->Rows[1]->Cells[1]->Value = "Y / X";

		dataGridView2->Columns->Add("Column1", " ");
		dataGridView2->Columns->Add("Col2", " ");
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows[0]->Cells[1]->Value = "i";
		dataGridView2->Rows[1]->Cells[0]->Value = "j";
		dataGridView2->Rows[1]->Cells[1]->Value = "Y / X";	

		dataGridView3->Columns->Add("Column1", " ");
		dataGridView3->Columns->Add("Col2", " ");
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows[0]->Cells[1]->Value = "i";
		dataGridView3->Rows[1]->Cells[0]->Value = "j";
		dataGridView3->Rows[1]->Cells[1]->Value = "Y / X";

		x = y = 0.0;
		for (int i = 0; i < n; i++)
		{
			dataGridView1->Columns->Add("Col2", " ");
			dataGridView1->Rows[0]->Cells[i+2]->Value = i;
			dataGridView1->Rows[1]->Cells[i + 2]->Value = x;
			dataGridView2->Columns->Add("Col2", " ");
			dataGridView2->Rows[0]->Cells[i + 2]->Value = i;
			dataGridView2->Rows[1]->Cells[i + 2]->Value = x;
			dataGridView3->Columns->Add("Col2", " ");
			dataGridView3->Rows[0]->Cells[i + 2]->Value = i;
			dataGridView3->Rows[1]->Cells[i + 2]->Value = x;
			x += h;
		}
		for (int i = 0; i < m; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView1->Rows[i + 2]->Cells[1]->Value = y;
			dataGridView2->Rows->Add();
			dataGridView2->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView2->Rows[i + 2]->Cells[1]->Value = y;
			dataGridView3->Rows->Add();
			dataGridView3->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView3->Rows[i + 2]->Cells[1]->Value = y;
			y += tau;
		}
		x = y = 0.0;
		double R, maxnev = 0.0;
		for (int i = 0; i < m; i++)
		{
			x = 0.0;
			for (int j = 0; j < n; j++)
			{
				dataGridView1->Rows[i + 2]->Cells[j+2]->Value =V[j][i];
				dataGridView2->Rows[i + 2]->Cells[j + 2]->Value = pow(sin(x*y*y), 2);
				x += h;
			}
			y += tau;
		}
		x = y = 0.0;
		for (int j = 1; j < m - 1; j++)
		{
			y += tau;
			x = 0.0;
			for (int i = 1; i < n - 1; i++)
			{
				x += h;
				R = func(x, y) + A * V[i][j] + (1 / pow(h, 2)) * (V[i - 1][j] + V[i + 1][j]) + (1 / pow(tau, 2)) * (V[i][j - 1] + V[i][j + 1]);
				if (fabs(R) > maxnev)
					maxnev = fabs(R);
			}
		}
		x = y = 0.0;
		for (int i = 0; i < m; i++)
		{
			x = 0.0;
			for (int j = 0; j < n; j++)
			{
				if (maxmax < fabs(pow(sin(x*y*y), 2) - V[j][i]))
					maxmax = fabs(pow(sin(x*y*y), 2) - V[j][i]);
				dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = fabs(pow(sin(x*y*y), 2) - V[j][i]);
				x += h;
			}
			y += tau;
		}

		if (radioButton1->Checked)
		{
			dataGridView3->Visible = false;
			dataGridView2->Visible = false;
			dataGridView1->Visible = true;
		}
		if (radioButton2->Checked)
		{
			dataGridView3->Visible = false;
			dataGridView2->Visible = true;
			dataGridView1->Visible = false;
		}
		if (radioButton3->Checked)
		{
			dataGridView3->Visible = true;
			dataGridView2->Visible = false;
			dataGridView1->Visible = false;
		}
		label6->Text = "На решение затрачено N = " + Convert::ToString(s) + " итераций";
		label5->Text = "Достигнутая точность = " + Convert::ToString(maxeps);
		label7->Text = "max|v-u| = " + Convert::ToString(maxmax);
		label17->Text = "Невязка = " + Convert::ToString(maxnev);


	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	dataGridView2->Rows->Clear();

	dataGridView3->Rows->Clear();
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace std;
	label10->Visible = true;
	label11->Visible = true;
	dataGridView2->Visible = false;
	dataGridView3->Visible = false;
	int n = Convert::ToInt32(textBox1->Text);
	int m = Convert::ToInt32(textBox2->Text);
	double eps = Convert::ToDouble(textBox3->Text);
	int control = Convert::ToInt32(textBox4->Text);
	double h = (double)3 / n, tau = (double)1 / m;
	double h2 = h / 2, tau2 = tau / 2;
	double maxmax = 0.0;
	vector<vector<double>> V2(2 * n + 1, vector<double>(2 * m + 1));
	int n2 = 2 * n + 1, m2 = 2 * m + 1;
	n++; m++;
	vector<vector<double>> V(n, vector<double>(m));
	double x = 0.0, y = 0.0;
	double A = -2 * (1 / pow(h, 2) + 1 / pow(tau, 2));
	double A2 = -2 * (1 / pow(h2, 2) + 1 / pow(tau2, 2));
	double Vs = 0.0;
	double maxeps = 10.0;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		V[i][0] = cosh(x*x - 3 * x) - 1;
		x += h;
	}
	for (int i = 0; i < m; i++)
	{
		V[0][i] = pow(sin(M_PI*y), 2);
		y += tau;
	}
	x = y = 0.0;
	for (int i = 0; i < n2; i++)
	{
		V2[i][0] = cosh(x*x - 3 * x) - 1;
		x += h2;
	}
	for (int i = 0; i < m2; i++)
	{
		V2[0][i] = pow(sin(M_PI*y), 2);
		y += tau2;
	}
	while (eps < maxeps && s < control)
	{
		x = y = 0.0;
		maxeps = 0.0;
		x += h;
		for (int j = 1; j < m - 1; j++)
		{
			y += tau;
			x = 0.0;
			for (int i = 1; i < n - 1; i++)
			{
				x += h;
				Vs = V[i][j];
				V[i][j] = (1 / A) * (-osnfunc(x, y) - (1 / pow(h, 2))*(V[i - 1][j] + V[i + 1][j]) - (1 / pow(tau, 2)) * (V[i][j - 1] + V[i][j + 1]));
				if (fabs(Vs - V[i][j]) > maxeps)
					maxeps = fabs(Vs - V[i][j]);
			}
		}
		s++;
	}
	double maxeps2 = 10.0;
	double s2 = 0.0;
	while (eps < maxeps2 && s2 < control)
	{
		x = y = 0.0;
		maxeps2 = 0.0;
		x += h2;
		for (int j = 1; j < (m2 - 1); j++)
		{
			y += tau2;
			x = 0.0;
			for (int i = 1; i < (n2 - 1); i++)
			{
				x += h2;
				Vs = V2[i][j];
				V2[i][j] = (1 / A2) * (-osnfunc(x, y) - (1 / pow(h2, 2))*(V2[i - 1][j] + V2[i + 1][j]) - (1 / pow(tau2, 2)) * (V2[i][j - 1] + V2[i][j + 1]));
				if (fabs(Vs - V2[i][j]) > maxeps2)
					maxeps2 = fabs(Vs - V2[i][j]);
			}
		}
		s2++;
	}
	dataGridView1->Columns->Add("Column1", " ");
	dataGridView1->Columns->Add("Col2", " ");
	dataGridView1->Rows->Add();
	dataGridView1->Rows->Add();
	dataGridView1->Rows[0]->Cells[1]->Value = "i";
	dataGridView1->Rows[1]->Cells[0]->Value = "j";
	dataGridView1->Rows[1]->Cells[1]->Value = "Y / X";

	dataGridView2->Columns->Add("Column1", " ");
	dataGridView2->Columns->Add("Col2", " ");
	dataGridView2->Rows->Add();
	dataGridView2->Rows->Add();
	dataGridView2->Rows[0]->Cells[1]->Value = "i";
	dataGridView2->Rows[1]->Cells[0]->Value = "j";
	dataGridView2->Rows[1]->Cells[1]->Value = "Y / X";

	dataGridView3->Columns->Add("Column1", " ");
	dataGridView3->Columns->Add("Col2", " ");
	dataGridView3->Rows->Add();
	dataGridView3->Rows->Add();
	dataGridView3->Rows[0]->Cells[1]->Value = "i";
	dataGridView3->Rows[1]->Cells[0]->Value = "j";
	dataGridView3->Rows[1]->Cells[1]->Value = "Y / X";

	x = y = 0.0;
	for (int i = 0; i < n; i++)
	{
		dataGridView1->Columns->Add("Col2", " ");
		dataGridView1->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView1->Rows[1]->Cells[i + 2]->Value = x;
		dataGridView3->Columns->Add("Col2", " ");
		dataGridView3->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView3->Rows[1]->Cells[i + 2]->Value = x;
		x += h;
	}
	x = 0.0;
	for (int i = 0; i < n2; i++)
	{
		dataGridView2->Columns->Add("Col2", " ");
		dataGridView2->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView2->Rows[1]->Cells[i + 2]->Value = x;
		x += h2;
	}
	for (int i = 0; i < m; i++)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView1->Rows[i + 2]->Cells[1]->Value = y;
		dataGridView3->Rows->Add();
		dataGridView3->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView3->Rows[i + 2]->Cells[1]->Value = y;
		y += tau;
	}
	y = 0.0;
	for (int i = 0; i < m2; i++)
	{
		dataGridView2->Rows->Add();
		dataGridView2->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView2->Rows[i + 2]->Cells[1]->Value = y;
		y += tau2;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			dataGridView1->Rows[j + 2]->Cells[i + 2]->Value = V[j][i];
		}
	}
	x = y = 0.0;
	for (int i = 0; i < m2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			dataGridView2->Rows[j + 2]->Cells[i + 2]->Value = V2[i][j];
			x += h2;
		}
		y += tau2;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (maxmax < fabs(V2[j*2][i*2] - V[j][i]))
				maxmax = fabs(V2[j * 2][i * 2] - V[j][i]);
			dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = fabs(V2[j * 2][i * 2] - V[j][i]);
		}
	}

	if (radioButton4->Checked)
	{
		dataGridView3->Visible = false;
		dataGridView2->Visible = false;
		dataGridView1->Visible = true;
	}
	if (radioButton5->Checked)
	{
		dataGridView3->Visible = false;
		dataGridView2->Visible = true;
		dataGridView1->Visible = false;
	}
	if (radioButton6->Checked)
	{
		dataGridView3->Visible = true;
		dataGridView2->Visible = false;
		dataGridView1->Visible = false;
	}
	label6->Text = "На решение с обычным шагом затрачено N = " + Convert::ToString(s) + " итераций";
	label5->Text = "Достигнутая точность с обычным шагом = " + Convert::ToString(maxeps);
	label7->Text = "max|v-v2| = " + Convert::ToString(maxmax);
	label10->Text = "На решение с половинным шагом затрачено N2 = " + Convert::ToString(s2) + " итераций";
	label11->Text = "Достигнутая точность с половинным шагом = " + Convert::ToString(maxeps2);
}

// ===============================================================================================//

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace std;
	label10->Visible = false;
	label11->Visible = false;
	dataGridView2->Visible = false;
	dataGridView3->Visible = false;
	int n = Convert::ToInt32(textBox1->Text);
	int m = Convert::ToInt32(textBox2->Text);
	int k = Convert::ToInt32(textBox5->Text);
	double eps = Convert::ToDouble(textBox3->Text);
	int control = Convert::ToInt32(textBox4->Text);
	double h = (double)3 / n, tau = (double)1 / m;
	double maxmax = 0.0;
	n++; m++;
	vector<vector<double>> V(n, vector<double>(m));
	vector<vector<double>> Vs(n, vector<double>(m));
	double x = 0.0, y = 0.0;
	double A = -2 * (1 / pow(h, 2) + 1 / pow(tau, 2));
	int ii = 1;
	double maxeps = 10.0;
	double LMin = (4 / pow(h, 2)) * pow(sin(M_PI / (2 * n - 2)), 2) + (4 / pow(tau, 2)) * pow(sin(M_PI / (2 * m - 2)), 2);
	double LMax = (4 / pow(h, 2)) * pow(cos(M_PI / (2 * n - 2)), 2) + (4 / pow(tau, 2)) * pow(cos(M_PI / (2 * m - 2)), 2);
	double TAU0 = 2 / (LMin + LMax);
	double Rho0, Rho1, Mu = 0.0, Xi, n0;
	int N;
	Xi = LMin / LMax;
	Rho0 = (1 - Xi) / (1 + Xi);
	Rho1 = (1 - sqrt(Xi)) / (1 + sqrt(Xi));
	n0 = log(2/eps) / log(1/Rho1);
	N = (int)n0 + 1;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		Vs[i][m - 1] = pow(sin(x), 2);
		x += h;
	}
	for (int i = 0; i < m; i++)
	{
		Vs[n - 1][i] = pow(sin(3 * y*y), 2);
		y += tau;
	}
	double tauk;
	V = Vs;
	while (eps < maxeps && s < control)
	{
		x = y = 0.0;
		maxeps = 0.0;
		Mu = -cos(((2 * ii - 1)*M_PI) / (2 * k));
		tauk = FindChebyshevParam(TAU0, Rho0, Mu);
		for (int j = 1; j < m - 1; j++)
		{
			y += tau;
			x = 0.0;
			for (int i = 1; i < n - 1; i++)
			{
				x += h;
				V[i][j] = (1-(tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + (1 / pow(h, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + (1 / pow(tau, 2)) * (Vs[i][j - 1] + Vs[i][j + 1]));
				if (fabs(Vs[i][j] - V[i][j]) > maxeps)
					maxeps = fabs(Vs[i][j] - V[i][j]);
			}
		}
		Vs = V;
		if (ii < k)
			ii++;
		else if (ii == k)
			ii = 1;
		s++;
	}
	dataGridView1->Columns->Add("Column1", " ");
	dataGridView1->Columns->Add("Col2", " ");
	dataGridView1->Rows->Add();
	dataGridView1->Rows->Add();
	dataGridView1->Rows[0]->Cells[1]->Value = "i";
	dataGridView1->Rows[1]->Cells[0]->Value = "j";
	dataGridView1->Rows[1]->Cells[1]->Value = "Y / X";

	dataGridView2->Columns->Add("Column1", " ");
	dataGridView2->Columns->Add("Col2", " ");
	dataGridView2->Rows->Add();
	dataGridView2->Rows->Add();
	dataGridView2->Rows[0]->Cells[1]->Value = "i";
	dataGridView2->Rows[1]->Cells[0]->Value = "j";
	dataGridView2->Rows[1]->Cells[1]->Value = "Y / X";

	dataGridView3->Columns->Add("Column1", " ");
	dataGridView3->Columns->Add("Col2", " ");
	dataGridView3->Rows->Add();
	dataGridView3->Rows->Add();
	dataGridView3->Rows[0]->Cells[1]->Value = "i";
	dataGridView3->Rows[1]->Cells[0]->Value = "j";
	dataGridView3->Rows[1]->Cells[1]->Value = "Y / X";

	x = y = 0.0;
	for (int i = 0; i < n; i++)
	{
		dataGridView1->Columns->Add("Col2", " ");
		dataGridView1->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView1->Rows[1]->Cells[i + 2]->Value = x;
		dataGridView2->Columns->Add("Col2", " ");
		dataGridView2->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView2->Rows[1]->Cells[i + 2]->Value = x;
		dataGridView3->Columns->Add("Col2", " ");
		dataGridView3->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView3->Rows[1]->Cells[i + 2]->Value = x;
		x += h;
	}
	for (int i = 0; i < m; i++)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView1->Rows[i + 2]->Cells[1]->Value = y;
		dataGridView2->Rows->Add();
		dataGridView2->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView2->Rows[i + 2]->Cells[1]->Value = y;
		dataGridView3->Rows->Add();
		dataGridView3->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView3->Rows[i + 2]->Cells[1]->Value = y;
		y += tau;
	}
	x = y = 0.0;
	for (int i = 0; i < m; i++)
	{
		x = 0.0;
		for (int j = 0; j < n; j++)
		{
			dataGridView1->Rows[i + 2]->Cells[j + 2]->Value = V[j][i];
			dataGridView2->Rows[i + 2]->Cells[j + 2]->Value = pow(sin(x*y*y), 2);
			x += h;
		}
		y += tau;
	}
	x = y = 0.0;
	for (int i = 0; i < m; i++)
	{
		x = 0.0;
		for (int j = 0; j < n; j++)
		{
			if (maxmax < fabs(pow(sin(x*y*y), 2) - V[j][i]))
				maxmax = fabs(pow(sin(x*y*y), 2) - V[j][i]);
			dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = fabs(pow(sin(x*y*y), 2) - V[j][i]);
			x += h;
		}
		y += tau;
	}

	if (radioButton1->Checked)
	{
		dataGridView3->Visible = false;
		dataGridView2->Visible = false;
		dataGridView1->Visible = true;
	}
	if (radioButton2->Checked)
	{
		dataGridView3->Visible = false;
		dataGridView2->Visible = true;
		dataGridView1->Visible = false;
	}
	if (radioButton3->Checked)
	{
		dataGridView3->Visible = true;
		dataGridView2->Visible = false;
		dataGridView1->Visible = false;
	}
	label6->Text = "На решение затрачено N = " + Convert::ToString(s) + " итераций";
	label5->Text = "Достигнутая точность = " + Convert::ToString(maxeps);
	label7->Text = "max|v-u| = " + Convert::ToString(maxmax);
	label16->Text = "Оптимальный k = " + Convert::ToString(N);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace std;
	label10->Visible = true;
	label11->Visible = true;
	dataGridView2->Visible = false;
	dataGridView3->Visible = false;
	int n = Convert::ToInt32(textBox1->Text);
	int m = Convert::ToInt32(textBox2->Text);
	int k = Convert::ToInt32(textBox5->Text);
	double eps = Convert::ToDouble(textBox3->Text);
	int control = Convert::ToInt32(textBox4->Text);
	double h = (double)3 / n, tau = (double)1 / m;
	double h2 = h / 2, tau2 = tau / 2;
	double maxmax = 0.0;
	vector<vector<double>> V2(2 * n + 1, vector<double>(2 * m + 1));
	vector<vector<double>> V2s(2 * n + 1, vector<double>(2 * m + 1));
	int n2 = 2 * n + 1, m2 = 2 * m + 1;
	n++; m++;
	vector<vector<double>> V(n, vector<double>(m));
	vector<vector<double>> Vs(n, vector<double>(m));
	double x = 0.0, y = 0.0;
	double A = -2 * (1 / pow(h, 2) + 1 / pow(tau, 2));
	double A2 = -2 * (1 / pow(h2, 2) + 1 / pow(tau2, 2));
	int ii = 1;
	double maxeps = 10.0;
	double LMin = (4 / pow(h, 2)) * pow(sin(M_PI / (2 * (n - 1))), 2) + (4 / pow(tau, 2)) * pow(sin(M_PI / (2 * (m - 1))), 2);
	double LMax = (4 / pow(h, 2)) * pow(cos(M_PI / (2 * (n - 1))), 2) + (4 / pow(tau, 2)) * pow(cos(M_PI / (2 * (m - 1))), 2);
	double LMin2 = (4 / pow(h2, 2)) * pow(sin(M_PI / (2 * (n2 - 1))), 2) + (4 / pow(tau2, 2)) * pow(sin(M_PI / (2 * (m2 - 1))), 2);
	double LMax2 = (4 / pow(h2, 2)) * pow(cos(M_PI / (2 * (n2 - 1))), 2) + (4 / pow(tau2, 2)) * pow(cos(M_PI / (2 * (m2 - 1))), 2);
	double TAU0 = 2 / (LMin + LMax);
	double TAU02 = 2 / (LMax2 + LMin2);
	double Rho0, Rho1, Mu = 0.0, Xi, Rho02, Rho12, Mu2 = 0.0, Xi2;
	double tauk, tauk2;
	Xi = LMin / LMax; Xi2 = LMin2 / LMax2;
	Rho0 = (1 - Xi) / (1 + Xi); 	Rho02 = (1 - Xi2) / (1 + Xi2);
	Rho1 = (1 - sqrt(Xi)) / (1 + sqrt(Xi)); Rho12 = (1 - sqrt(Xi2)) / (1 + sqrt(Xi2));
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		Vs[i][0] = cosh(x*x - 3 * x) - 1;
		x += h;
	}
	for (int i = 0; i < m; i++)
	{
		Vs[0][i] = pow(sin(M_PI*y), 2);
		y += tau;
	}
	x = y = 0.0;
	for (int i = 0; i < n2; i++)
	{
		V2s[i][0] = cosh(x*x - 3 * x) - 1;
		x += h2;
	}
	for (int i = 0; i < m2; i++)
	{
		V2s[0][i] = pow(sin(M_PI*y), 2);
		y += tau2;
	}
	V2 = V2s; V = Vs;
	while (eps < maxeps && s < control)
	{
		x = y = 0.0;
		maxeps = 0.0;
		x += h;
		Mu = -cos((2 * ii - 1)*M_PI / (2 * k));
		tauk = FindChebyshevParam(TAU0, Rho0, Mu);
		for (int j = 1; j < m - 1; j++)
		{
			y += tau;
			x = 0.0;
			for (int i = 1; i < n - 1; i++)
			{
				x += h;
				V[i][j]= (1 - (tauk / TAU0))*Vs[i][j] + tauk * (osnfunc(x, y) + (1 / pow(h, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + (1 / pow(tau, 2)) * (Vs[i][j - 1] + Vs[i][j + 1]));
				if (fabs(Vs[i][j] - V[i][j]) > maxeps)
					maxeps = fabs(Vs[i][j] - V[i][j]);
			}
		}
		if (ii < k)
			ii++;
		else if (ii == k)
			ii = 1;
		s++;
		Vs = V;
	}
	double maxeps2 = 10.0;
	double s2 = 0.0;
	ii = 1;
	while (eps < maxeps2 && s2 < control)
	{
		x = y = 0.0;
		maxeps2 = 0.0;
		x += h2;
		Mu2 = -cos((2 * ii - 1)*M_PI / (2 * k));
		tauk2 = FindChebyshevParam(TAU02, Rho02, Mu2);
		for (int j = 1; j < (m2 - 1); j++)
		{
			y += tau2;
			x = 0.0;
			for (int i = 1; i < (n2 - 1); i++)
			{
				x += h2;
				V2[i][j] = (1 - (tauk2 / TAU02))*V2s[i][j] + tauk2 * (osnfunc(x, y) + (1 / pow(h2, 2))*(V2s[i - 1][j] + V2s[i + 1][j]) + (1 / pow(tau2, 2)) * (V2s[i][j - 1] + V2s[i][j + 1]));
				if (fabs(V2s[i][j] - V2[i][j]) > maxeps2)
					maxeps2 = fabs(V2s[i][j] - V2[i][j]);
			}
		}
		if (ii < k)
			ii++;
		else if (ii == k)
			ii = 1;
		s2++;
		V2s = V2;
	}
	dataGridView1->Columns->Add("Column1", " ");
	dataGridView1->Columns->Add("Col2", " ");
	dataGridView1->Rows->Add();
	dataGridView1->Rows->Add();
	dataGridView1->Rows[0]->Cells[1]->Value = "i";
	dataGridView1->Rows[1]->Cells[0]->Value = "j";
	dataGridView1->Rows[1]->Cells[1]->Value = "Y / X";

	dataGridView2->Columns->Add("Column1", " ");
	dataGridView2->Columns->Add("Col2", " ");
	dataGridView2->Rows->Add();
	dataGridView2->Rows->Add();
	dataGridView2->Rows[0]->Cells[1]->Value = "i";
	dataGridView2->Rows[1]->Cells[0]->Value = "j";
	dataGridView2->Rows[1]->Cells[1]->Value = "Y / X";

	dataGridView3->Columns->Add("Column1", " ");
	dataGridView3->Columns->Add("Col2", " ");
	dataGridView3->Rows->Add();
	dataGridView3->Rows->Add();
	dataGridView3->Rows[0]->Cells[1]->Value = "i";
	dataGridView3->Rows[1]->Cells[0]->Value = "j";
	dataGridView3->Rows[1]->Cells[1]->Value = "Y / X";

	x = y = 0.0;
	for (int i = 0; i < n; i++)
	{
		dataGridView1->Columns->Add("Col2", " ");
		dataGridView1->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView1->Rows[1]->Cells[i + 2]->Value = x;
		dataGridView3->Columns->Add("Col2", " ");
		dataGridView3->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView3->Rows[1]->Cells[i + 2]->Value = x;
		x += h;
	}
	x = 0.0;
	for (int i = 0; i < n2; i++)
	{
		dataGridView2->Columns->Add("Col2", " ");
		dataGridView2->Rows[0]->Cells[i + 2]->Value = i;
		dataGridView2->Rows[1]->Cells[i + 2]->Value = x;
		x += h2;
	}
	for (int i = 0; i < m; i++)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView1->Rows[i + 2]->Cells[1]->Value = y;
		dataGridView3->Rows->Add();
		dataGridView3->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView3->Rows[i + 2]->Cells[1]->Value = y;
		y += tau;
	}
	y = 0.0;
	for (int i = 0; i < m2; i++)
	{
		dataGridView2->Rows->Add();
		dataGridView2->Rows[i + 2]->Cells[0]->Value = i;
		dataGridView2->Rows[i + 2]->Cells[1]->Value = y;
		y += tau2;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			dataGridView1->Rows[j + 2]->Cells[i + 2]->Value = V[j][i];
		}
	}
	x = y = 0.0;
	for (int i = 0; i < m2; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			dataGridView2->Rows[j + 2]->Cells[i + 2]->Value = V2[i][j];
			x += h2;
		}
		y += tau2;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (maxmax < fabs(V2[j * 2][i * 2] - V[j][i]))
				maxmax = fabs(V2[j * 2][i * 2] - V[j][i]);
			dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = fabs(V2[j * 2][i * 2] - V[j][i]);
		}
	}

	if (radioButton4->Checked)
	{
		dataGridView3->Visible = false;
		dataGridView2->Visible = false;
		dataGridView1->Visible = true;
	}
	if (radioButton5->Checked)
	{
		dataGridView3->Visible = false;
		dataGridView2->Visible = true;
		dataGridView1->Visible = false;
	}
	if (radioButton6->Checked)
	{
		dataGridView3->Visible = true;
		dataGridView2->Visible = false;
		dataGridView1->Visible = false;
	}
	label6->Text = "На решение с обычным шагом затрачено N = " + Convert::ToString(s) + " итераций";
	label5->Text = "Достигнутая точность с обычным шагом = " + Convert::ToString(maxeps);
	label7->Text = "max|v-v2| = " + Convert::ToString(maxmax);
	label10->Text = "На решение с половинным шагом затрачено N2 = " + Convert::ToString(s2) + " итераций";
	label11->Text = "Достигнутая точность с половинным шагом = " + Convert::ToString(maxeps2);
}


private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	using namespace std;
	label10->Visible = false;
	label11->Visible = false;
	dataGridView2->Visible = false;
	dataGridView3->Visible = false;
	int n = Convert::ToInt32(textBox1->Text);
	int m = Convert::ToInt32(textBox2->Text);
	int k = Convert::ToInt32(textBox5->Text);
	double eps = Convert::ToDouble(textBox3->Text);
	int control = Convert::ToInt32(textBox4->Text);
	double h = (double)3 / n, tau = (double)1 / m;
	double maxmax = 0.0;
	n++; m++;
	vector<vector<double>> V(n, vector<double>(m));
	vector<vector<double>> Vs(n, vector<double>(m));
	double x = 0.0, y = 0.0;
	double A = -2 * (1 / pow(h, 2) + 1 / pow(tau, 2));
	int ii = 1;
	double maxeps = 10.0;
	double LMin = (4 / pow(h, 2)) * pow(sin(M_PI / (2 * n - 2)), 2) + (4 / pow(tau, 2)) * pow(sin(M_PI / (2 * m - 2)), 2);
	double LMax = (4 / pow(h, 2)) * pow(cos(M_PI / (2 * n - 2)), 2) + (4 / pow(tau, 2)) * pow(cos(M_PI / (2 * m - 2)), 2);
	double TAU0 = 2 / (LMin + LMax);
	double Rho0, Rho1, Mu = 0.0, Xi, n0;
	int N;
	Xi = LMin / LMax;
	Rho0 = (1 - Xi) / (1 + Xi);
	Rho1 = (1 - sqrt(Xi)) / (1 + sqrt(Xi));
	n0 = log(2 / eps) / log(1 / Rho1);
	N = (int)n0 + 1;
	int s = 0;
	if ((n - 1) % 2 == 0)
	{
		for (int i = 0; i < (n - 1) / 2; i++)
		{
			Vs[i][(m - 1) / 2] = pow(sin(0.25*x), 2);
			x += h;
		}
		for (int i = 0; i < m; i++)
		{
			Vs[n - 1][i] = pow(sin(3 * y*y), 2);
			y += tau;
		}
		y = 0.5;
		for (int i = (m - 1) / 2; i < m; i++)
		{
			Vs[(n - 1) / 2][i] = pow(sin(1.5*y*y), 2);
			y += tau;
		}
		x = 1.5;
		for (int i = (n - 1) / 2; i < n; i++)
		{
			Vs[i][m - 1] = pow(sin(x), 2);
			x += h;
		}
		double tauk;
		V = Vs;
		while (eps < maxeps && s < control)
		{
			x = y = 0.0;
			maxeps = 0.0;
			Mu = -cos(((2 * ii - 1)*M_PI) / (2 * k));
			tauk = FindChebyshevParam(TAU0, Rho0, Mu);
			for (int j = 1; j < m - 1; j++)
			{
				if (j < (m - 1) / 2)
				{
					y += tau;
					x = 0.0;
					for (int i = 1; i < n - 1; i++)
					{
						x += h;
						V[i][j] = (1 - (tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + (1 / pow(h, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + (1 / pow(tau, 2)) * (Vs[i][j - 1] + Vs[i][j + 1]));
						if (fabs(Vs[i][j] - V[i][j]) > maxeps)
							maxeps = fabs(Vs[i][j] - V[i][j]);
					}
				}
				else if (j >= (m - 1) / 2)
				{
					y += tau;
					x = 1.5;
					for (int i = (n - 1) / 2 + 1; i < n - 1; i++)
					{
						x += h;
						V[i][j] = (1 - (tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + (1 / pow(h, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + (1 / pow(tau, 2)) * (Vs[i][j - 1] + Vs[i][j + 1]));
						if (fabs(Vs[i][j] - V[i][j]) > maxeps)
							maxeps = fabs(Vs[i][j] - V[i][j]);
					}
				}
			}
			Vs = V;
			if (ii < k)
				ii++;
			else if (ii == k)
				ii = 1;
			s++;
		}
		dataGridView1->Columns->Add("Column1", " ");
		dataGridView1->Columns->Add("Col2", " ");
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[1]->Value = "i";
		dataGridView1->Rows[1]->Cells[0]->Value = "j";
		dataGridView1->Rows[1]->Cells[1]->Value = "Y / X";

		dataGridView2->Columns->Add("Column1", " ");
		dataGridView2->Columns->Add("Col2", " ");
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows[0]->Cells[1]->Value = "i";
		dataGridView2->Rows[1]->Cells[0]->Value = "j";
		dataGridView2->Rows[1]->Cells[1]->Value = "Y / X";

		dataGridView3->Columns->Add("Column1", " ");
		dataGridView3->Columns->Add("Col2", " ");
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows[0]->Cells[1]->Value = "i";
		dataGridView3->Rows[1]->Cells[0]->Value = "j";
		dataGridView3->Rows[1]->Cells[1]->Value = "Y / X";

		x = y = 0.0;
		for (int i = 0; i < n; i++)
		{
			dataGridView1->Columns->Add("Col2", " ");
			dataGridView1->Rows[0]->Cells[i + 2]->Value = i;
			dataGridView1->Rows[1]->Cells[i + 2]->Value = x;
			dataGridView2->Columns->Add("Col2", " ");
			dataGridView2->Rows[0]->Cells[i + 2]->Value = i;
			dataGridView2->Rows[1]->Cells[i + 2]->Value = x;
			dataGridView3->Columns->Add("Col2", " ");
			dataGridView3->Rows[0]->Cells[i + 2]->Value = i;
			dataGridView3->Rows[1]->Cells[i + 2]->Value = x;
			x += h;
		}
		for (int i = 0; i < m; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView1->Rows[i + 2]->Cells[1]->Value = y;
			dataGridView2->Rows->Add();
			dataGridView2->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView2->Rows[i + 2]->Cells[1]->Value = y;
			dataGridView3->Rows->Add();
			dataGridView3->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView3->Rows[i + 2]->Cells[1]->Value = y;
			y += tau;
		}
		x = y = 0.0;
		for (int i = 0; i < m; i++)
		{
			if (i <= (m - 1) / 2)
			{
				x = 0.0;
				for (int j = 0; j < n; j++)
				{
					dataGridView1->Rows[i + 2]->Cells[j + 2]->Value = V[j][i];
					dataGridView2->Rows[i + 2]->Cells[j + 2]->Value = pow(sin(x*y*y), 2);
					x += h;
				}
				y += tau;
			}
			else if (i > (m - 1) / 2)
			{
				x = 1.5;
				for (int j = (n - 1) / 2; j < n; j++)
				{
					dataGridView1->Rows[i + 2]->Cells[j + 2]->Value = V[j][i];
					dataGridView2->Rows[i + 2]->Cells[j + 2]->Value = pow(sin(x*y*y), 2);
					x += h;
				}
				y += tau;
			}
		}
		x = y = 0.0;
		for (int i = 0; i < m; i++)
		{
			if (i <= (m - 1) / 2)
			{
				x = 0.0;
				for (int j = 0; j < n; j++)
				{
					if (maxmax < fabs(pow(sin(x*y*y), 2) - V[j][i]))
						maxmax = fabs(pow(sin(x*y*y), 2) - V[j][i]);
					dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = fabs(pow(sin(x*y*y), 2) - V[j][i]);
					x += h;
				}
				y += tau;
			}
			else if (i > (m - 1) / 2)
			{
				x = 1.5;
				for (int j = (n - 1) / 2; j < n; j++)
				{
					if (maxmax < fabs(pow(sin(x*y*y), 2) - V[j][i]))
						maxmax = fabs(pow(sin(x*y*y), 2) - V[j][i]);
					dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = fabs(pow(sin(x*y*y), 2) - V[j][i]);
					x += h;
				}
				y += tau;
			}
		}
	}
	////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////
	else
	{
		double h2, tau2, A2, h1, tau1, A1;
		int NN = (int)(n - 1) / 2;
		h1 = 1.5 / NN; h2 = 1.5 / (NN + 1);
		tau1 = 0.5 / NN; tau2 = 0.5 / (NN + 1);
		for (int i = 0; i <= NN; i++)
		{
			Vs[i][(m - 1) / 2] = pow(sin(0.25*x), 2);
			x += h1;
		}
		for (int i = 0; i < m; i++)
		{
			Vs[n - 1][i] = pow(sin(3 * y*y), 2);
			if (y < 0.5)
				y += tau1;
			else
				y += tau2;
		}
		y = 0.5;
		for (int i = NN; i < m; i++)
		{
			Vs[(n - 1) / 2][i] = pow(sin(1.5*y*y), 2);
			y += tau2;
		}
		x = 1.5;
		for (int i = (n - 1) / 2; i < n; i++)
		{
			Vs[i][m - 1] = pow(sin(x), 2);
			x += h2;
		}
		double tauk;
		V = Vs;
		while (eps < maxeps && s < control)
		{
			x = y = 0.0;
			maxeps = 0.0;
			Mu = -cos(((2 * ii - 1)*M_PI) / (2 * k));
			tauk = FindChebyshevParam(TAU0, Rho0, Mu);
			for (int j = 1; j < m - 1; j++)
			{
				if (j < (m - 1) / 2)
				{
					y += tau1;
					x = 0.0;
					for (int i = 1; i < n - 1; i++)
					{
						if (x < 1.5 && x + h1 != 1.5)
						{
							x += h1;
							V[i][j] = (1 - (tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + (1 / pow(h1, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + (1 / pow(tau1, 2)) * (Vs[i][j - 1] + Vs[i][j + 1]));
						}
						else if (x >= 1.5)
						{
							x += h2;
							V[i][j] = (1 - (tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + (1 / pow(h2, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + (1 / pow(tau1, 2)) * (Vs[i][j - 1] + Vs[i][j + 1]));
						}
						else if (x + h1 == 1.5)
						{
							x += h1;
							V[i][j] = (1 - (tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + ((1 / (h1*(h1 + h2)))*Vs[i - 1][j] + (1 / (h2*(h1 + h2)))*Vs[i + 1][j]) + (1 / pow(tau1, 2))* (Vs[i][j - 1] + Vs[i][j + 1]));
						}
						//V[i][j] = (1 - (tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + (1 / pow(h, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + (1 / pow(tau, 2)) * (Vs[i][j - 1] + Vs[i][j + 1]));
						if (fabs(Vs[i][j] - V[i][j]) > maxeps)
							maxeps = fabs(Vs[i][j] - V[i][j]);
					}
				}
				else if (j >= (m - 1) / 2)
				{
					if (y < 0.5)
						y += tau1;
					else
						y += tau2;
					x = 1.5;
					for (int i = (n - 1) / 2 + 1; i < n - 1; i++)
					{
						if (y == 0.5)
							V[i][j] = (1 - (tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + (1 / pow(h2, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + ((1 / (tau1*(tau1 + tau2))) * Vs[i][j - 1] + (1 / (tau2*(tau1 + tau2)))*Vs[i][j + 1]));
						else
						{
							V[i][j] = (1 - (tauk / TAU0))*Vs[i][j] + tauk * (func(x, y) + (1 / pow(h2, 2))*(Vs[i - 1][j] + Vs[i + 1][j]) + (1 / pow(tau2, 2)) * (Vs[i][j - 1] + Vs[i][j + 1]));
						}
						if (fabs(Vs[i][j] - V[i][j]) > maxeps)
							maxeps = fabs(Vs[i][j] - V[i][j]);
						x += h2; // поменять если не так!
					}
				}
			}
			Vs = V;
			if (ii < k)
				ii++;
			else if (ii == k)
				ii = 1;
			s++;
		}
		dataGridView1->Columns->Add("Column1", " ");
		dataGridView1->Columns->Add("Col2", " ");
		dataGridView1->Rows->Add();
		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[1]->Value = "i";
		dataGridView1->Rows[1]->Cells[0]->Value = "j";
		dataGridView1->Rows[1]->Cells[1]->Value = "Y / X";

		dataGridView2->Columns->Add("Column1", " ");
		dataGridView2->Columns->Add("Col2", " ");
		dataGridView2->Rows->Add();
		dataGridView2->Rows->Add();
		dataGridView2->Rows[0]->Cells[1]->Value = "i";
		dataGridView2->Rows[1]->Cells[0]->Value = "j";
		dataGridView2->Rows[1]->Cells[1]->Value = "Y / X";

		dataGridView3->Columns->Add("Column1", " ");
		dataGridView3->Columns->Add("Col2", " ");
		dataGridView3->Rows->Add();
		dataGridView3->Rows->Add();
		dataGridView3->Rows[0]->Cells[1]->Value = "i";
		dataGridView3->Rows[1]->Cells[0]->Value = "j";
		dataGridView3->Rows[1]->Cells[1]->Value = "Y / X";

		x = y = 0.0;
		for (int i = 0; i < n; i++)
		{
			dataGridView1->Columns->Add("Col2", " ");
			dataGridView1->Rows[0]->Cells[i + 2]->Value = i;
			dataGridView1->Rows[1]->Cells[i + 2]->Value = x;
			dataGridView2->Columns->Add("Col2", " ");
			dataGridView2->Rows[0]->Cells[i + 2]->Value = i;
			dataGridView2->Rows[1]->Cells[i + 2]->Value = x;
			dataGridView3->Columns->Add("Col2", " ");
			dataGridView3->Rows[0]->Cells[i + 2]->Value = i;
			dataGridView3->Rows[1]->Cells[i + 2]->Value = x;
			if (x < 1.5)
				x += h1;
			else
				x += h2;
		}
		for (int i = 0; i < m; i++)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView1->Rows[i + 2]->Cells[1]->Value = y;
			dataGridView2->Rows->Add();
			dataGridView2->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView2->Rows[i + 2]->Cells[1]->Value = y;
			dataGridView3->Rows->Add();
			dataGridView3->Rows[i + 2]->Cells[0]->Value = i;
			dataGridView3->Rows[i + 2]->Cells[1]->Value = y;
			if (y < 0.5)
				y += tau1;
			else
				y += tau2;
		}
		x = y = 0.0;
		for (int i = 0; i < m; i++)
		{
			if (i <= (m - 1) / 2)
			{
				x = 0.0;
				for (int j = 0; j < n; j++)
				{
					dataGridView1->Rows[i + 2]->Cells[j + 2]->Value = V[j][i];
					dataGridView2->Rows[i + 2]->Cells[j + 2]->Value = pow(sin(x*y*y), 2);
					if (maxmax < fabs(pow(sin(x*y*y), 2) - V[j][i]))
						maxmax = fabs(pow(sin(x*y*y), 2) - V[j][i]);
					dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = fabs(pow(sin(x*y*y), 2) - V[j][i]);
					if (x < 1.5)
						x += h1;
					else
						x += h2;
				}
				if (i != (m-1)/2)
					y += tau1;
			}
			else if (i > (m - 1) / 2)
			{
				x = 1.5;
				y += tau2;
				for (int j = (n - 1) / 2; j < n; j++)
				{
					dataGridView1->Rows[i + 2]->Cells[j + 2]->Value = V[j][i];
					dataGridView2->Rows[i + 2]->Cells[j + 2]->Value = pow(sin(x*y*y), 2);
					if (maxmax < fabs(pow(sin(x*y*y), 2) - V[j][i]))
						maxmax = fabs(pow(sin(x*y*y), 2) - V[j][i]);
					dataGridView3->Rows[j + 2]->Cells[i + 2]->Value = fabs(pow(sin(x*y*y), 2) - V[j][i]);
					x += h2;
				}
			}
		}
	}
	if (radioButton1->Checked)
	{
		dataGridView3->Visible = false;
		dataGridView2->Visible = false;
		dataGridView1->Visible = true;
	}
	if (radioButton2->Checked)
	{
		dataGridView3->Visible = false;
		dataGridView2->Visible = true;
		dataGridView1->Visible = false;
	}
	if (radioButton3->Checked)
	{
		dataGridView3->Visible = true;
		dataGridView2->Visible = false;
		dataGridView1->Visible = false;
	}
	label6->Text = "На решение затрачено N = " + Convert::ToString(s) + " итераций";
	label5->Text = "Достигнутая точность = " + Convert::ToString(maxeps);
	label7->Text = "max|v-u| = " + Convert::ToString(maxmax);
	label16->Text = "Оптимальный k = " + Convert::ToString(N);
}
};

}

