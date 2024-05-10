#pragma once
#include <math.h>
#include "MyForm2.h"
#include<cmath>
double xn, xk, xh, x, y, a, ymax, ymin, yt;

int i, k, j;
int h;
int m;

namespace zadanie5 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::IO;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ òàáëèöàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÒåêñòêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãðàôèêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÔîíàß÷ååêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûñîòàÑòðîêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ øèðèíàÑòîëáöîâToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòØðèôòàÇàãîëîâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÃðàôèêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ öâåòÔîíàÃðàôèêàToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::TabControl^ tabControl1;
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òàáëèöàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÒåêñòêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÔîíàß÷ååêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûñîòàÑòðîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øèðèíàÑòîëáöîâToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòØðèôòàÇàãîëîâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãðàôèêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÃðàôèêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->öâåòÔîíàÃðàôèêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			tabControl1 = (gcnew System::Windows::Forms::TabControl());
			tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			tabControl1->Controls->Add(this->tabPage1);
			tabControl1->Controls->Add(this->tabPage2);
			tabControl1->Controls->Add(this->tabPage3);
			tabControl1->Location = System::Drawing::Point(12, 30);
			tabControl1->Name = L"tabControl1";
			tabControl1->SelectedIndex = 0;
			tabControl1->Size = System::Drawing::Size(508, 424);
			tabControl1->TabIndex = 2;
			tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 23);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(500, 397);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ââîä äàííûõ";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(291, 146);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(196, 23);
			this->textBox4->TabIndex = 8;
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(291, 117);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(196, 23);
			this->textBox3->TabIndex = 7;
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(291, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 23);
			this->textBox2->TabIndex = 6;
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(291, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 23);
			this->textBox1->TabIndex = 5;
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(268, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ââåäèòå ïîëîæèòåëüíîå çíà÷åíèåå À";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(6, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ââåäèòå øàã XH";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(225, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ââåäèòå êîíå÷íîå çíà÷åíèå XK";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ââåäèòå íà÷àëüíîå çíà÷åíèå XN";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(136, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ââîä äàííûõ ïðîìåæóòêà";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 23);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(500, 397);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Òàáëèöà äàííûõ ïðîìåæóòêà";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(35, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(428, 202);
			this->dataGridView1->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(189, 342);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(274, 23);
			this->textBox6->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(189, 295);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(274, 23);
			this->textBox5->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(31, 342);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(148, 19);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Ìèí. çíà÷. ôóíêöèè";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(31, 295);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 19);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Ìàêñ. çíà÷. ôóíêöèè";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(48, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(401, 26);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Òàáëèöà çíà÷åíèé íà ïðîìåæóòêå [XN; XK]";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage3->Location = System::Drawing::Point(4, 23);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(500, 397);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Ãðàôèê ôóíêöèè íà ïðîìåæóòêå";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(6, 6);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsVisibleInLegend = false;
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(488, 385);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->âèäToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(532, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem,
					this->âûõîäToolStripMenuItem1
			});
			this->ôàéëToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(57, 23);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem
			// 
			this->ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem->Name = L"ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem";
			this->ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(274, 22);
			this->ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem->Text = L"&Ñîõðàíèòü äàííûå òàáëèöû â ôàéë";
			this->ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem1
			// 
			this->âûõîäToolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->âûõîäToolStripMenuItem1->Name = L"âûõîäToolStripMenuItem1";
			this->âûõîäToolStripMenuItem1->Size = System::Drawing::Size(274, 22);
			this->âûõîäToolStripMenuItem1->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem1_Click);
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->òàáëèöàToolStripMenuItem,
					this->ãðàôèêToolStripMenuItem
			});
			this->âèäToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(48, 23);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// òàáëèöàToolStripMenuItem
			// 
			this->òàáëèöàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->öâåòÒåêñòêToolStripMenuItem,
					this->öâåòÔîíàß÷ååêToolStripMenuItem, this->âûñîòàÑòðîêToolStripMenuItem, this->øèðèíàÑòîëáöîâToolStripMenuItem, this->ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem,
					this->öâåòØðèôòàÇàãîëîâêàToolStripMenuItem
			});
			this->òàáëèöàToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->òàáëèöàToolStripMenuItem->Name = L"òàáëèöàToolStripMenuItem";
			this->òàáëèöàToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->òàáëèöàToolStripMenuItem->Text = L"Òàáëèöà";
			// 
			// öâåòÒåêñòêToolStripMenuItem
			// 
			this->öâåòÒåêñòêToolStripMenuItem->Name = L"öâåòÒåêñòêToolStripMenuItem";
			this->öâåòÒåêñòêToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->öâåòÒåêñòêToolStripMenuItem->Text = L"Öâåò òåêñòà";
			this->öâåòÒåêñòêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòÒåêñòàToolStripMenuItem_Click);
			// 
			// öâåòÔîíàß÷ååêToolStripMenuItem
			// 
			this->öâåòÔîíàß÷ååêToolStripMenuItem->Name = L"öâåòÔîíàß÷ååêToolStripMenuItem";
			this->öâåòÔîíàß÷ååêToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->öâåòÔîíàß÷ååêToolStripMenuItem->Text = L"Öâåò ôîíà ÿ÷ååê";
			this->öâåòÔîíàß÷ååêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòÔîíàß÷ååêToolStripMenuItem_Click);
			// 
			// âûñîòàÑòðîêToolStripMenuItem
			// 
			this->âûñîòàÑòðîêToolStripMenuItem->Name = L"âûñîòàÑòðîêToolStripMenuItem";
			this->âûñîòàÑòðîêToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->âûñîòàÑòðîêToolStripMenuItem->Text = L"Âûñîòà ñòðîê";
			this->âûñîòàÑòðîêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûñîòàÑòðîêToolStripMenuItem_Click);
			// 
			// øèðèíàÑòîëáöîâToolStripMenuItem
			// 
			this->øèðèíàÑòîëáöîâToolStripMenuItem->Name = L"øèðèíàÑòîëáöîâToolStripMenuItem";
			this->øèðèíàÑòîëáöîâToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->øèðèíàÑòîëáöîâToolStripMenuItem->Text = L"Øèðèíà ñòîëáöîâ";
			this->øèðèíàÑòîëáöîâToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::øèðèíàÑòîëáöîâToolStripMenuItem_Click);
			// 
			// ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem
			// 
			this->ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem->Name = L"ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem";
			this->ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem->Text = L"Ïàðàìåòðû øðèôòà çàãîëîâêà";
			this->ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem_Click);
			// 
			// öâåòØðèôòàÇàãîëîâêàToolStripMenuItem
			// 
			this->öâåòØðèôòàÇàãîëîâêàToolStripMenuItem->Name = L"öâåòØðèôòàÇàãîëîâêàToolStripMenuItem";
			this->öâåòØðèôòàÇàãîëîâêàToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->öâåòØðèôòàÇàãîëîâêàToolStripMenuItem->Text = L"Öâåò øðèôòà çàãîëîâêà";
			this->öâåòØðèôòàÇàãîëîâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòØðèôòàÇàãîëîâêàToolStripMenuItem_Click);
			// 
			// ãðàôèêToolStripMenuItem
			// 
			this->ãðàôèêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->öâåòÃðàôèêàToolStripMenuItem,
					this->öâåòÔîíàÃðàôèêàToolStripMenuItem
			});
			this->ãðàôèêToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ãðàôèêToolStripMenuItem->Name = L"ãðàôèêToolStripMenuItem";
			this->ãðàôèêToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->ãðàôèêToolStripMenuItem->Text = L"Ãðàôèê";
			// 
			// öâåòÃðàôèêàToolStripMenuItem
			// 
			this->öâåòÃðàôèêàToolStripMenuItem->Name = L"öâåòÃðàôèêàToolStripMenuItem";
			this->öâåòÃðàôèêàToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->öâåòÃðàôèêàToolStripMenuItem->Text = L"Öâåò ãðàôèêà";
			this->öâåòÃðàôèêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòÃðàôèêàToolStripMenuItem_Click);
			// 
			// öâåòÔîíàÃðàôèêàToolStripMenuItem
			// 
			this->öâåòÔîíàÃðàôèêàToolStripMenuItem->Name = L"öâåòÔîíàÃðàôèêàToolStripMenuItem";
			this->öâåòÔîíàÃðàôèêàToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->öâåòÔîíàÃðàôèêàToolStripMenuItem->Text = L"Öâåò ôîíà ãðàôèêà";
			this->öâåòÔîíàÃðàôèêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::öâåòÔîíàÃðàôèêàToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(65, 23);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(504, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Âûõîä";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 505);
			this->Controls->Add(tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Âûïîëíèë Åôðåìîâ Â.Â., ãðóïïà 23-ÊÔ. Çàäàíèå 5";
			tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
	private: System::Void âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
	private: System::Void âûõîäToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Application::Exit();
	}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		double xn, xk, xh, x, y, a, ymax, ymin, yt;
		int n, i;
		Series^ plot1 = chart1->Series[0];
		plot1->Points->Clear();
		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") && (textBox4->Text != "")) {
			xn = Convert::ToDouble(textBox1->Text);
			xk = Convert::ToDouble(textBox2->Text);
			xh = Convert::ToDouble(textBox3->Text);
			a = Convert::ToDouble(textBox4->Text);

			if ((xn >= xk) || (xh > (xk - xn)))
			{
				MessageBox::Show("Äàííûå çàïîëíåíû íåâåðíî", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK,

					MessageBoxIcon::Exclamation);
			}
			else
			{
				x = xn;
				dataGridView1->Columns->Clear();
				dataGridView1->ColumnCount = 2;
				dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1);
				dataGridView1->Rows[0]->Cells[0]->Value = Convert::ToString(" X");
				dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString(" Y");
				i = 1; x = xn; ymax = -1.8e307; ymin = 1.8e307;
				while (x <= xk)
				{
					if (x <= 0) 
					{ 
						y =pow(abs(x),x+2)+sin(x);
					}
					else
						if (x <= a) 
						{ 
							y =pow(3,x+3)+2*x;
						}
						else
							if (x > a) 
							{
								y = pow(pow(x,2) + x + 1, 0.2);
							}
					plot1->Points->AddXY(x, y);
					dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
					yt = ceil(y * 100) / 100;
					dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
					if (y > ymax)
					{
						ymax = ceil(y * 100) / 100;
					}
					if (y < ymin)
					{
						ymin = ceil(y * 100) / 100;
					}
					x = x + xh;
					i++;
				}
			}
			textBox5->Text = Convert::ToString(ymax);
			textBox6->Text = Convert::ToString(ymin);
		}
		else
		{
			MessageBox::Show("Çàïîëíèòå, ïîæàëóéñòà, äàííûå", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void öâåòÒåêñòàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ColorDialog^ colorDialog1 = gcnew ColorDialog;
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			dataGridView1->DefaultCellStyle->ForeColor = colorDialog1->Color;
		}
	}
	private: System::Void öâåòÔîíàß÷ååêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ColorDialog^ colorDialog1 = gcnew ColorDialog;
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			dataGridView1->DefaultCellStyle->BackColor = colorDialog1->Color;
		}
	}
	private: System::Void âûñîòàÑòðîêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm2^ f = gcnew MyForm2();
		this->Hide(); f->ShowDialog(); this->Show();
		for (int i = 0; i < dataGridView1->RowCount; i++)
		{
			DataGridViewRow^ row = dataGridView1->Rows[i];
			row->Height = h;
		}
	}
	private: System::Void øèðèíàÑòîëáöîâToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MyForm2^ f = gcnew MyForm2();
		this->Hide(); f->ShowDialog(); this->Show();
		for (int i = 0; i < dataGridView1->ColumnCount; i++)
		{
			DataGridViewColumn^ column = dataGridView1->Columns[i];
			column->Width = m;
		}
	}
	private: System::Void ïàðàìåòðûØðèôòàÇàãîëîâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		FontDialog^ fontDialog1 = gcnew FontDialog;
		if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			label6->Font = fontDialog1->Font;
		}
	}
	private: System::Void öâåòØðèôòàÇàãîëîâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ColorDialog^ colorDialog1 = gcnew ColorDialog;
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			label6->ForeColor = colorDialog1->Color;
		}
	}
	private: System::Void öâåòÃðàôèêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ColorDialog^ colorDialog1 = gcnew ColorDialog;
		Series^ plot1 = chart1->Series[0];
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			plot1->Color = colorDialog1->Color;
	}
	private: System::Void öâåòÔîíàÃðàôèêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ColorDialog^ colorDialog1 = gcnew ColorDialog;
		Series^ plot1 = chart1->Series[0];
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			chart1->BackColor = colorDialog1->Color;
		}
	}
	private: System::Void ñîõðàíèòüÄàííûåÒàáëèöûÂÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Text Files|*.txt";
		saveFileDialog1->FilterIndex = 2; saveFileDialog1->RestoreDirectory = true;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter^ pwriter = gcnew StreamWriter(saveFileDialog1->FileName);
			for (int i = 0; i < dataGridView1->RowCount - 1; i++) pwriter->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value->ToString() + " | " + dataGridView1->Rows[i]->Cells[1]->Value->ToString());
			pwriter->Close();
		}
	}

	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) 
	{
		int l, t, k; bool a = true; String^ str; str = textBox1->Text;
		l = str->Length;
		t = 0;
		k = 0;
		if (str[t] == '-') t++;
		if (str[t] == ',') a = false;
		while (t < l)
		{
			if (str[t] == ',')
			{
				if (t == l - 1 || k > 0) a = false; k++;

			}
			else if (str[t] < '0' || str[t]>'9') a = false;
			t++;
		}
		if (a == false)
		{
			MessageBox::Show("Ïàðàìåòð XN íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			this->textBox1->Focus();
		}
	}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) 
{
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-') t++;
	if (str[t] == ',') a = false;
	while (t < l)
	{
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}
		else if (str[t] < '0' || str[t]>'9') a = false;
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("Ïàðàìåòð XK íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox2->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) 
{
	int l, t, k; bool a = true; String^ str; str = textBox3->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-') t++;
	if (str[t] == ',') a = false;
	while (t < l)
	{
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}
		else if (str[t] < '0' || str[t]>'9') a = false;
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("Ïàðàìåòð XH íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox3->Focus();
	}
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) 
{
	int l, t, k; bool a = true; String^ str; str = textBox4->Text;
	l = str->Length;
	t = 0;
	k = 0;
	if (str[t] == '-') t++;
	if (str[t] == ',') a = false;
	while (t < l)
	{
		if (str[t] == ',')
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}
		else if (str[t] < '0' || str[t]>'9') a = false;
		t++;
	}
	if (a == false)
	{
		MessageBox::Show("Ïàðàìåòð A íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		this->textBox4->Focus();
	}
}
	};
}