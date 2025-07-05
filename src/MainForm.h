#pragma once

namespace TaskNTrack {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;;
	using namespace System::Data::SqlClient;
	using namespace System::Windows::Forms;

	public ref class MainForm : public System::Windows::Forms::Form
	{
		String^ currentAction = "add"; // default is add "add", "edit", "delete", etc.
		int addStep = 0;
		String^ tempCategory;
		String^ tempItem;
		String^ oldItemToEdit;
		String^ newCategory;
		String^ newItem;
		double newAmount;
		String^ newDate;
		String^ currentTaskAction = "";
		int taskStep = 0;
		String^ tempTaskTitle;
		String^ tempTaskDesc;
		String^ tempTaskDueDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Button^ ApplyButton_Task;
	private: System::Windows::Forms::TextBox^ txtInput_Task;



	private: System::Windows::Forms::Label^ lblPrompt_Task;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;


		   double tempAmount;

	public:
		MainForm(void) {
			InitializeComponent();
			InitExpenseInput();
		}

		MainForm(String^ username, String^ sessionName) {
			InitializeComponent();
			loggedInUser = username;
			currentSession = sessionName;
			InitExpenseInput(); // <- This is crucial
		}
		void InitExpenseInput() {
			lblPrompt->Text = "Enter Category:";
			txtInput->Clear();
			addStep = 0;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	String^ connStr = "Data Source=.;Initial Catalog=TaskNTrackDB;Integrated Security=True";
	//private: int addStep = 0;
	//private: String^ inputCategory;
	//private: double inputAmount;
	//private: String^ inputDescription;
	private:
		String^ loggedInUser;
		String^ currentSession;
	private: System::Windows::Forms::Label^ lblExpensesTitle;
	private: System::Windows::Forms::Button^ btnAddExpense;
	private: System::Windows::Forms::DataGridView^ dgvExpenses;
	private: System::Windows::Forms::DataGridView^ dgvTasks;
	private: System::Windows::Forms::Label^ lblTasksTitle;
	private: System::Windows::Forms::Button^ btnEditExpense;
	private: System::Windows::Forms::Button^ btnRefreshExpenses;
	private: System::Windows::Forms::Button^ btnDeleteExpense;
	private: System::Windows::Forms::Button^ btnRefreshTasks;
	private: System::Windows::Forms::Button^ btnDeleteTask;
	private: System::Windows::Forms::Button^ btnEditTask;
	private: System::Windows::Forms::Button^ btnAddTask;
	private: System::Windows::Forms::Button^ btnMarkTaskDone;
	private: System::Windows::Forms::ComboBox^ cmbCategoryFilter;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblPrompt;
	private: System::Windows::Forms::TextBox^ txtInput;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblTotalBudget;
	private: System::Windows::Forms::Label^ lblTotalExpenses;
	private: System::Windows::Forms::Label^ lblRemainingBudget;
	private: System::Windows::Forms::Button^ btnViewSummary;
	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::Label^ lblSession;

	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnNext;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 
		void InitializeComponent(void)
		{
			this->lblExpensesTitle = (gcnew System::Windows::Forms::Label());
			this->btnAddExpense = (gcnew System::Windows::Forms::Button());
			this->dgvExpenses = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvTasks = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblTasksTitle = (gcnew System::Windows::Forms::Label());
			this->btnEditExpense = (gcnew System::Windows::Forms::Button());
			this->btnRefreshExpenses = (gcnew System::Windows::Forms::Button());
			this->btnDeleteExpense = (gcnew System::Windows::Forms::Button());
			this->btnRefreshTasks = (gcnew System::Windows::Forms::Button());
			this->btnDeleteTask = (gcnew System::Windows::Forms::Button());
			this->btnEditTask = (gcnew System::Windows::Forms::Button());
			this->btnAddTask = (gcnew System::Windows::Forms::Button());
			this->btnMarkTaskDone = (gcnew System::Windows::Forms::Button());
			this->cmbCategoryFilter = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblPrompt = (gcnew System::Windows::Forms::Label());
			this->txtInput = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblTotalBudget = (gcnew System::Windows::Forms::Label());
			this->lblTotalExpenses = (gcnew System::Windows::Forms::Label());
			this->lblRemainingBudget = (gcnew System::Windows::Forms::Label());
			this->btnViewSummary = (gcnew System::Windows::Forms::Button());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->lblSession = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->ApplyButton_Task = (gcnew System::Windows::Forms::Button());
			this->txtInput_Task = (gcnew System::Windows::Forms::TextBox());
			this->lblPrompt_Task = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvExpenses))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTasks))->BeginInit();
			this->SuspendLayout();
			// 
			// lblExpensesTitle
			// 
			this->lblExpensesTitle->AutoSize = true;
			this->lblExpensesTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblExpensesTitle->Location = System::Drawing::Point(303, 149);
			this->lblExpensesTitle->Name = L"lblExpensesTitle";
			this->lblExpensesTitle->Size = System::Drawing::Size(428, 65);
			this->lblExpensesTitle->TabIndex = 0;
			this->lblExpensesTitle->Text = L"Expense Manager";
			// 
			// btnAddExpense
			// 
			this->btnAddExpense->Location = System::Drawing::Point(112, 423);
			this->btnAddExpense->Name = L"btnAddExpense";
			this->btnAddExpense->Size = System::Drawing::Size(155, 42);
			this->btnAddExpense->TabIndex = 2;
			this->btnAddExpense->Text = L"Add Expenses";
			this->btnAddExpense->UseVisualStyleBackColor = true;
			this->btnAddExpense->Click += gcnew System::EventHandler(this, &MainForm::btnAddExpense_Click);
			// 
			// dgvExpenses
			// 
			this->dgvExpenses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvExpenses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			this->dgvExpenses->Location = System::Drawing::Point(328, 437);
			this->dgvExpenses->Name = L"dgvExpenses";
			this->dgvExpenses->RowHeadersWidth = 62;
			this->dgvExpenses->RowTemplate->Height = 28;
			this->dgvExpenses->Size = System::Drawing::Size(665, 378);
			this->dgvExpenses->TabIndex = 3;
			this->dgvExpenses->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dgvExpenses_CellContentClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Category";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 150;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Item";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 150;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Amount";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 150;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Date";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 150;
			// 
			// dgvTasks
			// 
			this->dgvTasks->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTasks->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8
			});
			this->dgvTasks->Location = System::Drawing::Point(1278, 437);
			this->dgvTasks->Name = L"dgvTasks";
			this->dgvTasks->RowHeadersWidth = 62;
			this->dgvTasks->RowTemplate->Height = 28;
			this->dgvTasks->Size = System::Drawing::Size(519, 492);
			this->dgvTasks->TabIndex = 4;
			this->dgvTasks->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dgvTasks_CellContentClick);
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Title";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 150;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Description";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 150;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Due Date";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 150;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Completed";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 8;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 150;
			// 
			// lblTasksTitle
			// 
			this->lblTasksTitle->AutoSize = true;
			this->lblTasksTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTasksTitle->Location = System::Drawing::Point(1386, 162);
			this->lblTasksTitle->Name = L"lblTasksTitle";
			this->lblTasksTitle->Size = System::Drawing::Size(341, 65);
			this->lblTasksTitle->TabIndex = 5;
			this->lblTasksTitle->Text = L"Task Manager";
			this->lblTasksTitle->Click += gcnew System::EventHandler(this, &MainForm::lblTasksTitle_Click);
			// 
			// btnEditExpense
			// 
			this->btnEditExpense->Location = System::Drawing::Point(112, 518);
			this->btnEditExpense->Name = L"btnEditExpense";
			this->btnEditExpense->Size = System::Drawing::Size(159, 42);
			this->btnEditExpense->TabIndex = 6;
			this->btnEditExpense->Text = L"Edit Expenses";
			this->btnEditExpense->UseVisualStyleBackColor = true;
			this->btnEditExpense->Click += gcnew System::EventHandler(this, &MainForm::btnEditExpense_Click);
			// 
			// btnRefreshExpenses
			// 
			this->btnRefreshExpenses->Location = System::Drawing::Point(112, 685);
			this->btnRefreshExpenses->Name = L"btnRefreshExpenses";
			this->btnRefreshExpenses->Size = System::Drawing::Size(155, 42);
			this->btnRefreshExpenses->TabIndex = 8;
			this->btnRefreshExpenses->Text = L"Refresh ";
			this->btnRefreshExpenses->UseVisualStyleBackColor = true;
			this->btnRefreshExpenses->Click += gcnew System::EventHandler(this, &MainForm::btnRefreshExpenses_Click);
			// 
			// btnDeleteExpense
			// 
			this->btnDeleteExpense->Location = System::Drawing::Point(112, 598);
			this->btnDeleteExpense->Name = L"btnDeleteExpense";
			this->btnDeleteExpense->Size = System::Drawing::Size(155, 42);
			this->btnDeleteExpense->TabIndex = 7;
			this->btnDeleteExpense->Text = L"Delete Expenses";
			this->btnDeleteExpense->UseVisualStyleBackColor = true;
			this->btnDeleteExpense->Click += gcnew System::EventHandler(this, &MainForm::btnDeleteExpense_Click);
			// 
			// btnRefreshTasks
			// 
			this->btnRefreshTasks->Location = System::Drawing::Point(1086, 801);
			this->btnRefreshTasks->Name = L"btnRefreshTasks";
			this->btnRefreshTasks->Size = System::Drawing::Size(155, 42);
			this->btnRefreshTasks->TabIndex = 12;
			this->btnRefreshTasks->Text = L"Refresh";
			this->btnRefreshTasks->UseVisualStyleBackColor = true;
			// 
			// btnDeleteTask
			// 
			this->btnDeleteTask->Location = System::Drawing::Point(1086, 649);
			this->btnDeleteTask->Name = L"btnDeleteTask";
			this->btnDeleteTask->Size = System::Drawing::Size(155, 42);
			this->btnDeleteTask->TabIndex = 11;
			this->btnDeleteTask->Text = L"Delete Tasks";
			this->btnDeleteTask->UseVisualStyleBackColor = true;
			this->btnDeleteTask->Click += gcnew System::EventHandler(this, &MainForm::btnDeleteTask_Click);
			// 
			// btnEditTask
			// 
			this->btnEditTask->Location = System::Drawing::Point(1086, 566);
			this->btnEditTask->Name = L"btnEditTask";
			this->btnEditTask->Size = System::Drawing::Size(155, 42);
			this->btnEditTask->TabIndex = 10;
			this->btnEditTask->Text = L"Edit Tasks";
			this->btnEditTask->UseVisualStyleBackColor = true;
			this->btnEditTask->Click += gcnew System::EventHandler(this, &MainForm::btnEditTask_Click);
			// 
			// btnAddTask
			// 
			this->btnAddTask->Location = System::Drawing::Point(1086, 492);
			this->btnAddTask->Name = L"btnAddTask";
			this->btnAddTask->Size = System::Drawing::Size(155, 42);
			this->btnAddTask->TabIndex = 9;
			this->btnAddTask->Text = L"Add Tasks";
			this->btnAddTask->UseVisualStyleBackColor = true;
			this->btnAddTask->Click += gcnew System::EventHandler(this, &MainForm::btnAddTask_Click);
			// 
			// btnMarkTaskDone
			// 
			this->btnMarkTaskDone->Location = System::Drawing::Point(1086, 723);
			this->btnMarkTaskDone->Name = L"btnMarkTaskDone";
			this->btnMarkTaskDone->Size = System::Drawing::Size(155, 42);
			this->btnMarkTaskDone->TabIndex = 20;
			this->btnMarkTaskDone->Text = L"Mark Done";
			this->btnMarkTaskDone->UseVisualStyleBackColor = true;
			this->btnMarkTaskDone->Click += gcnew System::EventHandler(this, &MainForm::btnMarkTaskDone_Click);
			// 
			// cmbCategoryFilter
			// 
			this->cmbCategoryFilter->FormattingEnabled = true;
			this->cmbCategoryFilter->Location = System::Drawing::Point(421, 265);
			this->cmbCategoryFilter->Name = L"cmbCategoryFilter";
			this->cmbCategoryFilter->Size = System::Drawing::Size(248, 28);
			this->cmbCategoryFilter->TabIndex = 21;
			this->cmbCategoryFilter->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::cmbCategoryFilter_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(112, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 20);
			this->label1->TabIndex = 22;
			this->label1->Text = L"Select Category";
			// 
			// lblPrompt
			// 
			this->lblPrompt->AutoSize = true;
			this->lblPrompt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrompt->Location = System::Drawing::Point(111, 324);
			this->lblPrompt->Name = L"lblPrompt";
			this->lblPrompt->Size = System::Drawing::Size(0, 25);
			this->lblPrompt->TabIndex = 23;
			// 
			// txtInput
			// 
			this->txtInput->Location = System::Drawing::Point(421, 320);
			this->txtInput->Name = L"txtInput";
			this->txtInput->Size = System::Drawing::Size(248, 26);
			this->txtInput->TabIndex = 24;
			this->txtInput->TextChanged += gcnew System::EventHandler(this, &MainForm::txtInput_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(778, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 45);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Summary";
			// 
			// lblTotalBudget
			// 
			this->lblTotalBudget->AutoSize = true;
			this->lblTotalBudget->Location = System::Drawing::Point(800, 324);
			this->lblTotalBudget->Name = L"lblTotalBudget";
			this->lblTotalBudget->Size = System::Drawing::Size(100, 20);
			this->lblTotalBudget->TabIndex = 26;
			this->lblTotalBudget->Text = L"Total Budget";
			// 
			// lblTotalExpenses
			// 
			this->lblTotalExpenses->AutoSize = true;
			this->lblTotalExpenses->Location = System::Drawing::Point(800, 360);
			this->lblTotalExpenses->Name = L"lblTotalExpenses";
			this->lblTotalExpenses->Size = System::Drawing::Size(118, 20);
			this->lblTotalExpenses->TabIndex = 27;
			this->lblTotalExpenses->Text = L"Total Expenses";
			// 
			// lblRemainingBudget
			// 
			this->lblRemainingBudget->AutoSize = true;
			this->lblRemainingBudget->Location = System::Drawing::Point(800, 393);
			this->lblRemainingBudget->Name = L"lblRemainingBudget";
			this->lblRemainingBudget->Size = System::Drawing::Size(141, 20);
			this->lblRemainingBudget->TabIndex = 28;
			this->lblRemainingBudget->Text = L"Remaining Budget";
			// 
			// btnViewSummary
			// 
			this->btnViewSummary->Location = System::Drawing::Point(790, 275);
			this->btnViewSummary->Name = L"btnViewSummary";
			this->btnViewSummary->Size = System::Drawing::Size(137, 34);
			this->btnViewSummary->TabIndex = 29;
			this->btnViewSummary->Text = L"View Summary";
			this->btnViewSummary->UseVisualStyleBackColor = true;
			this->btnViewSummary->Click += gcnew System::EventHandler(this, &MainForm::btnViewSummary_Click);
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUser->Location = System::Drawing::Point(74, 60);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(0, 32);
			this->lblUser->TabIndex = 30;
			this->lblUser->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// lblSession
			// 
			this->lblSession->AutoSize = true;
			this->lblSession->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSession->Location = System::Drawing::Point(74, 100);
			this->lblSession->Name = L"lblSession";
			this->lblSession->Size = System::Drawing::Size(0, 32);
			this->lblSession->TabIndex = 31;
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(30, 901);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(154, 40);
			this->btnExit->TabIndex = 33;
			this->btnExit->Text = L"EXIT";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainForm::btnExit_Click);
			// 
			// btnNext
			// 
			this->btnNext->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNext->Location = System::Drawing::Point(421, 368);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(248, 45);
			this->btnNext->TabIndex = 34;
			this->btnNext->Text = L"Apply";
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &MainForm::btnNext_Click);
			// 
			// ApplyButton_Task
			// 
			this->ApplyButton_Task->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ApplyButton_Task->Location = System::Drawing::Point(1459, 360);
			this->ApplyButton_Task->Name = L"ApplyButton_Task";
			this->ApplyButton_Task->Size = System::Drawing::Size(258, 41);
			this->ApplyButton_Task->TabIndex = 37;
			this->ApplyButton_Task->Text = L"Apply";
			this->ApplyButton_Task->UseVisualStyleBackColor = true;
			this->ApplyButton_Task->Click += gcnew System::EventHandler(this, &MainForm::ApplyButton_Task_Click);
			// 
			// txtInput_Task
			// 
			this->txtInput_Task->Location = System::Drawing::Point(1459, 312);
			this->txtInput_Task->Name = L"txtInput_Task";
			this->txtInput_Task->Size = System::Drawing::Size(258, 26);
			this->txtInput_Task->TabIndex = 36;
			// 
			// lblPrompt_Task
			// 
			this->lblPrompt_Task->AutoSize = true;
			this->lblPrompt_Task->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrompt_Task->Location = System::Drawing::Point(1221, 319);
			this->lblPrompt_Task->Name = L"lblPrompt_Task";
			this->lblPrompt_Task->Size = System::Drawing::Size(0, 25);
			this->lblPrompt_Task->TabIndex = 35;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1825, 1050);
			this->Controls->Add(this->ApplyButton_Task);
			this->Controls->Add(this->txtInput_Task);
			this->Controls->Add(this->lblPrompt_Task);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->lblSession);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->btnViewSummary);
			this->Controls->Add(this->lblRemainingBudget);
			this->Controls->Add(this->lblTotalExpenses);
			this->Controls->Add(this->lblTotalBudget);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtInput);
			this->Controls->Add(this->lblPrompt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmbCategoryFilter);
			this->Controls->Add(this->btnMarkTaskDone);
			this->Controls->Add(this->btnRefreshTasks);
			this->Controls->Add(this->btnDeleteTask);
			this->Controls->Add(this->btnEditTask);
			this->Controls->Add(this->btnAddTask);
			this->Controls->Add(this->btnRefreshExpenses);
			this->Controls->Add(this->btnDeleteExpense);
			this->Controls->Add(this->btnEditExpense);
			this->Controls->Add(this->lblTasksTitle);
			this->Controls->Add(this->dgvTasks);
			this->Controls->Add(this->dgvExpenses);
			this->Controls->Add(this->btnAddExpense);
			this->Controls->Add(this->lblExpensesTitle);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvExpenses))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTasks))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void RefreshTasks() {
			dgvTasks->Rows->Clear();

			SqlConnection^ conn = gcnew SqlConnection(connStr);
			try {
				conn->Open();
				String^ query = "SELECT Title, Description, DueDate, IsCompleted FROM Tasks WHERE Username=@u AND SessionName=@s";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);
				cmd->Parameters->AddWithValue("@u", loggedInUser);
				cmd->Parameters->AddWithValue("@s", currentSession);

				SqlDataReader^ reader = cmd->ExecuteReader();
				/*while (reader->Read()) {
					String^ title = reader["Title"]->ToString();
					String^ desc = reader["Description"]->ToString();
					String^ date = Convert::ToDateTime(reader["DueDate"]).ToShortDateString();
					String^ done = (Convert::ToBoolean(reader["IsCompleted"]) ? "Yes" : "No");

					dgvTasks->Rows->Add(title, desc, date, done);
				}*/
				while (reader->Read()) {
					String^ title = reader["Title"]->ToString();
					String^ desc = reader["Description"]->ToString();
					String^ date = Convert::ToDateTime(reader["DueDate"]).ToShortDateString();
					bool isDone = Convert::ToBoolean(reader["IsCompleted"]);

					int rowIndex = dgvTasks->Rows->Add(title, desc, date, isDone ? "Yes" : "No");

					if (isDone) {
						dgvTasks->Rows[rowIndex]->DefaultCellStyle->ForeColor = Color::Gray;
						dgvTasks->Rows[rowIndex]->DefaultCellStyle->Font = gcnew System::Drawing::Font(
							dgvTasks->Font, FontStyle::Strikeout);
					}
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				conn->Close();
			}
		}

		void RefreshExpenses() {
			dgvExpenses->Rows->Clear();
			cmbCategoryFilter->Items->Clear();
			cmbCategoryFilter->Items->Add("All");

			SqlConnection^ conn = gcnew SqlConnection(connStr);
			try {
				conn->Open();
				String^ query = "SELECT * FROM Expenses WHERE Username=@u AND SessionName=@s";
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);
				cmd->Parameters->AddWithValue("@u", loggedInUser);
				cmd->Parameters->AddWithValue("@s", currentSession);

				SqlDataReader^ reader = cmd->ExecuteReader();
				double total = 0;
				while (reader->Read()) {
					String^ cat = reader["Category"]->ToString();
					String^ item = reader["Item"]->ToString();
					double amt = Convert::ToDouble(reader["Amount"]);
					String^ date = Convert::ToDateTime(reader["DateSpent"]).ToShortDateString();

					dgvExpenses->Rows->Add(cat, item, amt.ToString("F2"), date);
					total += amt;

					if (!cmbCategoryFilter->Items->Contains(cat))
						cmbCategoryFilter->Items->Add(cat);
				}
				lblTotalExpenses->Text = "Total: " + total.ToString("F2");

				// Load total budget
				reader->Close();
				SqlCommand^ budgetCmd = gcnew SqlCommand("SELECT Budget FROM Sessions WHERE Username=@u AND SessionName=@s", conn);
				budgetCmd->Parameters->AddWithValue("@u", loggedInUser);
				budgetCmd->Parameters->AddWithValue("@s", currentSession);
				double budget = Convert::ToDouble(budgetCmd->ExecuteScalar());

				lblTotalBudget->Text = "Budget: " + budget.ToString("F2");
				lblRemainingBudget->Text = "Remaining: " + (budget - total).ToString("F2");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				conn->Close();
			}
		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAddExpense_Click(System::Object^ sender, System::EventArgs^ e) {
	currentAction = "add";
	lblPrompt->Text = "Enter Category:";
	txtInput->Clear();
	addStep = 0;
}
	private: System::Void btnNext_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ input = txtInput->Text->Trim();

		if (input == "") {
			MessageBox::Show("Please enter a value.");
			return;
		}

		// 🚨 DELETE Expense Logic
		if (currentAction == "delete") {
			SqlConnection^ conn = gcnew SqlConnection(connStr);
			try {
				conn->Open();
				SqlCommand^ cmd = gcnew SqlCommand("DELETE FROM Expenses WHERE Username=@u AND SessionName=@s AND Item=@item", conn);
				cmd->Parameters->AddWithValue("@u", loggedInUser);
				cmd->Parameters->AddWithValue("@s", currentSession);
				cmd->Parameters->AddWithValue("@item", input);

				int rowsAffected = cmd->ExecuteNonQuery();
				if (rowsAffected > 0)
					MessageBox::Show("Expense deleted!");
				else
					MessageBox::Show("Item not found.");

				txtInput->Clear();
				lblPrompt->Text = "Enter Category:";
				currentAction = "add";
				addStep = 0;
				RefreshExpenses();
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				conn->Close();
			}
			return;
		}
		// ✏️ EDIT Expense Logic
		if (currentAction == "edit") {
			if (addStep == 0) {
				tempCategory = input; // existing category
				lblPrompt->Text = "Enter Item to Edit:";
				txtInput->Clear();
				addStep++;
			}
			else if (addStep == 1) {
				oldItemToEdit = input; // existing item name
				lblPrompt->Text = "Enter New Category:";
				txtInput->Clear();
				addStep++;
			}
			else if (addStep == 2) {
				newCategory = input;
				lblPrompt->Text = "Enter New Item Name:";
				txtInput->Clear();
				addStep++;
			}
			else if (addStep == 3) {
				newItem = input;
				lblPrompt->Text = "Enter New Amount:";
				txtInput->Clear();
				addStep++;
			}
			else if (addStep == 4) {
				if (!Double::TryParse(input, newAmount)) {
					MessageBox::Show("Invalid amount!");
					return;
				}
				lblPrompt->Text = "Enter New Date (yyyy-mm-dd):";
				txtInput->Clear();
				addStep++;
			}
			else if (addStep == 5) {
				newDate = input;

				SqlConnection^ conn = gcnew SqlConnection(connStr);
				try {
					conn->Open();
					SqlCommand^ cmd = gcnew SqlCommand(
						"UPDATE Expenses SET Category=@newC, Item=@newI, Amount=@amt, DateSpent=@date " +
						"WHERE Username=@u AND SessionName=@s AND Category=@oldC AND Item=@oldI", conn);

					cmd->Parameters->AddWithValue("@newC", newCategory);
					cmd->Parameters->AddWithValue("@newI", newItem);
					cmd->Parameters->AddWithValue("@amt", newAmount);
					cmd->Parameters->AddWithValue("@date", newDate);

					cmd->Parameters->AddWithValue("@u", loggedInUser);
					cmd->Parameters->AddWithValue("@s", currentSession);
					cmd->Parameters->AddWithValue("@oldC", tempCategory);
					cmd->Parameters->AddWithValue("@oldI", oldItemToEdit);

					int rowsAffected = cmd->ExecuteNonQuery();
					if (rowsAffected > 0)
						MessageBox::Show("Expense updated!");
					else
						MessageBox::Show("No matching record found!");

					txtInput->Clear();
					lblPrompt->Text = "Enter Category:";
					currentAction = "add";
					addStep = 0;
					RefreshExpenses();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message);
				}
				finally {
					conn->Close();
				}
			}
			return;
		}
		// ✅ ADD Expense Logic (default)
		if (currentAction == "add") {
			if (addStep == 0) {
				tempCategory = input;
				lblPrompt->Text = "Enter Item Name:";
				txtInput->Clear();
				addStep++;
			}
			else if (addStep == 1) {
				tempItem = input;
				lblPrompt->Text = "Enter Amount:";
				txtInput->Clear();
				addStep++;
			}
			else if (addStep == 2) {
				if (!Double::TryParse(input, tempAmount)) {
					MessageBox::Show("Invalid amount!");
					return;
				}
				lblPrompt->Text = "Enter Date\n(yyyy-mm-dd):";
				txtInput->Clear();
				addStep++;
			}
			else if (addStep == 3) {
				String^ date = input;

				SqlConnection^ conn = gcnew SqlConnection(connStr);
				try {
					conn->Open();
					SqlCommand^ cmd = gcnew SqlCommand(
						"INSERT INTO Expenses (SessionName, Username, Category, Item, Amount, Note, DateSpent) " +
						"VALUES (@session, @user, @category, @item, @amount, @note, @date)", conn);

					cmd->Parameters->AddWithValue("@session", currentSession);
					cmd->Parameters->AddWithValue("@user", loggedInUser);
					cmd->Parameters->AddWithValue("@category", tempCategory);
					cmd->Parameters->AddWithValue("@item", tempItem);
					cmd->Parameters->AddWithValue("@amount", tempAmount);
					cmd->Parameters->AddWithValue("@note", ""); // optional
					cmd->Parameters->AddWithValue("@date", date);
					cmd->ExecuteNonQuery();

					MessageBox::Show("Expense added!");

					txtInput->Clear();
					lblPrompt->Text = "Enter Category:";
					addStep = 0;
					RefreshExpenses();
				}
				catch (Exception^ ex) {
					MessageBox::Show("Error: " + ex->Message);
				}
				finally {
					conn->Close();
				}
			}
		}
	}

	 private: System::Void cmbCategoryFilter_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		 String^ filter = cmbCategoryFilter->Text;
		 if (filter == "") return;

		 dgvExpenses->Rows->Clear();

		 SqlConnection^ conn = gcnew SqlConnection(connStr);
		 try {
			 conn->Open();
			 String^ query;
			 SqlCommand^ cmd;

			 if (filter == "All") {
				 query = "SELECT * FROM Expenses WHERE Username=@u AND SessionName=@s";
				 cmd = gcnew SqlCommand(query, conn);
				 cmd->Parameters->AddWithValue("@u", loggedInUser);
				 cmd->Parameters->AddWithValue("@s", currentSession);
			 }
			 else {
				 query = "SELECT * FROM Expenses WHERE Username=@u AND SessionName=@s AND Category=@c";
				 cmd = gcnew SqlCommand(query, conn);
				 cmd->Parameters->AddWithValue("@u", loggedInUser);
				 cmd->Parameters->AddWithValue("@s", currentSession);
				 cmd->Parameters->AddWithValue("@c", filter);
			 }

			 SqlDataReader^ reader = cmd->ExecuteReader();
			 while (reader->Read()) {
				 String^ category = reader["Category"]->ToString();
				 String^ item = reader["Item"]->ToString();
				 double amt = Convert::ToDouble(reader["Amount"]);
				 String^ date = Convert::ToDateTime(reader["DateSpent"]).ToShortDateString();

				 dgvExpenses->Rows->Add(category, item, amt.ToString("F2"), date);
			 }
		 }
		 catch (Exception^ ex) {
			 MessageBox::Show("Error: " + ex->Message);
		 }
		 finally {
			 conn->Close();
		 }
}

private: System::Void dgvExpenses_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshTasks();
	RefreshExpenses();
	cmbCategoryFilter->SelectedItem = "All";
	if (cmbCategoryFilter->Items->Contains("All"))
		cmbCategoryFilter->SelectedItem = "All";
	lblUser->Text = "User: " + loggedInUser;
	lblSession->Text = "Session: " + currentSession;
}
private: System::Void btnViewSummary_Click(System::Object^ sender, System::EventArgs^ e) {
	double totalExpenses = 0, budget = 0;
	String^ session = currentSession;
	String^ summaryText = "";

	SqlConnection^ conn = gcnew SqlConnection(connStr);
	try {
		conn->Open();

		// Get category-wise expenses
		SqlCommand^ cmd = gcnew SqlCommand(
			"SELECT Category, SUM(Amount) AS Total FROM Expenses WHERE Username=@u AND SessionName=@s GROUP BY Category", conn);
		cmd->Parameters->AddWithValue("@u", loggedInUser);
		cmd->Parameters->AddWithValue("@s", session);
		SqlDataReader^ reader = cmd->ExecuteReader();

		System::Collections::Generic::List<String^>^ lines = gcnew System::Collections::Generic::List<String^>();
		lines->Add("SESSION SUMMARY");
		lines->Add("========================");
		lines->Add("Session Title: " + session);
		lines->Add("Username     : " + loggedInUser);
		lines->Add("");
		lines->Add("Category Breakdown:");
		lines->Add("------------------------");

		while (reader->Read()) {
			String^ cat = reader["Category"]->ToString();
			double amt = Convert::ToDouble(reader["Total"]);
			totalExpenses += amt;
			lines->Add("• " + cat + " : Rs " + amt.ToString("F2"));
		}
		reader->Close();

		// Get budget
		SqlCommand^ budgetCmd = gcnew SqlCommand(
			"SELECT Budget FROM Sessions WHERE Username=@u AND SessionName=@s", conn);
		budgetCmd->Parameters->AddWithValue("@u", loggedInUser);
		budgetCmd->Parameters->AddWithValue("@s", session);
		budget = Convert::ToDouble(budgetCmd->ExecuteScalar());

		double remaining = budget - totalExpenses;

		lines->Add("");
		lines->Add("Summary:");
		lines->Add("---------");
		lines->Add("Total Expenses: Rs " + totalExpenses.ToString("F2"));
		lines->Add("Total Budget  : Rs " + budget.ToString("F2"));
		lines->Add("Remaining     : Rs " + remaining.ToString("F2"));

		// Combine into string for MessageBox
		for each (String ^ line in lines)
			summaryText += line + "\n";

		MessageBox::Show(summaryText, "Summary");

		// Ask for PDF export
		if (MessageBox::Show("Generate PDF file with summary?", "Export to PDF", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
			SaveFileDialog^ saveDialog = gcnew SaveFileDialog();
			saveDialog->Filter = "PDF files (*.pdf)|*.pdf";
			saveDialog->FileName = session + "_Summary.pdf";

			if (saveDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ path = saveDialog->FileName;

				// PDF Generation
				iTextSharp::text::Document^ doc = gcnew iTextSharp::text::Document();
				iTextSharp::text::pdf::PdfWriter::GetInstance(doc, gcnew System::IO::FileStream(path, System::IO::FileMode::Create));
				doc->Open();

				// Load Unicode font (Arial.ttf)
				iTextSharp::text::pdf::BaseFont^ bf = iTextSharp::text::pdf::BaseFont::CreateFont(
					"C:\\Windows\\Fonts\\arial.ttf",
					iTextSharp::text::pdf::BaseFont::IDENTITY_H,
					true
				);

				iTextSharp::text::Font^ font = gcnew iTextSharp::text::Font(bf, 12);

				for each (String ^ line in lines) {
					doc->Add(gcnew iTextSharp::text::Paragraph(line, font));
				}

				doc->Close();
				MessageBox::Show("PDF saved to:\n" + path, "Done");
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
	}
	finally {
		conn->Close();
	}
}
private: System::Void cmbCategoryFilter_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnEditExpense_Click(System::Object^ sender, System::EventArgs^ e) {
	currentAction = "edit";
	lblPrompt->Text = "Enter Category of the Item to Edit:";
	txtInput->Clear();
	addStep = 0;
}
private: System::Void txtInput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnDeleteExpense_Click(System::Object^ sender, System::EventArgs^ e) {
	currentAction = "delete";
	lblPrompt->Text = "Enter Item to Delete:";
	txtInput->Clear();
}

private: System::Void btnRefreshExpenses_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshExpenses();

	if (cmbCategoryFilter->Items->Contains("All"))
		cmbCategoryFilter->SelectedItem = "All";

	txtInput->Clear();
	lblPrompt->Text = "Enter Category:";
	currentAction = "add";
	addStep = 0;
}
private: System::Void lblTasksTitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAddTask_Click(System::Object^ sender, System::EventArgs^ e) {
	currentTaskAction = "add";
	taskStep = 0;
	lblPrompt_Task->Text = "Enter Task Title:";
	txtInput_Task->Clear();
}
private: System::Void btnEditTask_Click(System::Object^ sender, System::EventArgs^ e) {
	currentTaskAction = "edit";
	taskStep = 0;
	lblPrompt_Task->Text = "Enter Task Title to Edit:";
	txtInput_Task->Clear();
}
private: System::Void btnDeleteTask_Click(System::Object^ sender, System::EventArgs^ e) {
	currentTaskAction = "delete";
	taskStep = 0;
	lblPrompt_Task->Text = "Enter Task Title to Delete:";
	txtInput_Task->Clear();
}
private: System::Void btnMarkTaskDone_Click(System::Object^ sender, System::EventArgs^ e) {
	currentTaskAction = "mark";
	taskStep = 0;
	lblPrompt_Task->Text = "Enter Task Title to Mark:";
	txtInput_Task->Clear();
}

private: System::Void ApplyButton_Task_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ input = txtInput_Task->Text->Trim();
	if (input == "") {
		MessageBox::Show("Please enter a value.");
		return;
	}

	if (currentTaskAction == "add") {
		if (taskStep == 0) {
			tempTaskTitle = input;
			lblPrompt_Task->Text = "Enter Description:";
			txtInput_Task->Clear();
			taskStep++;
		}
		else if (taskStep == 1) {
			tempTaskDesc = input;
			lblPrompt_Task->Text = "Enter Due Date \n(yyyy-mm-dd):";
			txtInput_Task->Clear();
			taskStep++;
		}
		else if (taskStep == 2) {
			tempTaskDueDate = input;

			SqlConnection^ conn = gcnew SqlConnection(connStr);
			try {
				conn->Open();
				SqlCommand^ cmd = gcnew SqlCommand(
					"INSERT INTO Tasks (Username, SessionName, Title, Description, DueDate, IsCompleted) " +
					"VALUES (@u, @s, @t, @d, @due, 0)", conn);

				cmd->Parameters->AddWithValue("@u", loggedInUser);
				cmd->Parameters->AddWithValue("@s", currentSession);
				cmd->Parameters->AddWithValue("@t", tempTaskTitle);
				cmd->Parameters->AddWithValue("@d", tempTaskDesc);
				cmd->Parameters->AddWithValue("@due", tempTaskDueDate);
				cmd->ExecuteNonQuery();

				MessageBox::Show("Task added!");
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
			finally {
				conn->Close();
			}

			taskStep = 0;
			lblPrompt_Task->Text = "Enter Task Title:";
			txtInput_Task->Clear();
			currentTaskAction = "";
			RefreshTasks(); // we'll define this!
		}
	}
	else if (currentTaskAction == "delete") {
		SqlConnection^ conn = gcnew SqlConnection(connStr);
		try {
			conn->Open();
			SqlCommand^ cmd = gcnew SqlCommand(
				"DELETE FROM Tasks WHERE Username=@u AND SessionName=@s AND Title=@t", conn);

			cmd->Parameters->AddWithValue("@u", loggedInUser);
			cmd->Parameters->AddWithValue("@s", currentSession);
			cmd->Parameters->AddWithValue("@t", input);

			int rows = cmd->ExecuteNonQuery();
			if (rows > 0)
				MessageBox::Show("Task deleted!");
			else
				MessageBox::Show("Task not found!");

			txtInput_Task->Clear();
			lblPrompt_Task->Text = "Enter Task Title:";
			currentTaskAction = "";
			taskStep = 0;
			RefreshTasks();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}
	//Marks
	else if (currentTaskAction == "mark") {
		SqlConnection^ conn = gcnew SqlConnection(connStr);
		try {
			conn->Open();
			SqlCommand^ cmd = gcnew SqlCommand(
				"UPDATE Tasks SET IsCompleted = 1 WHERE Username=@u AND SessionName=@s AND Title=@t", conn);

			cmd->Parameters->AddWithValue("@u", loggedInUser);
			cmd->Parameters->AddWithValue("@s", currentSession);
			cmd->Parameters->AddWithValue("@t", input);

			int rows = cmd->ExecuteNonQuery();
			if (rows > 0)
				MessageBox::Show("Task marked as done!");
			else
				MessageBox::Show("Task not found!");

			txtInput_Task->Clear();
			lblPrompt_Task->Text = "Enter Task Title:";
			currentTaskAction = "";
			taskStep = 0;
			RefreshTasks();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
		finally {
			conn->Close();
		}
	}
}
private: System::Void dgvTasks_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Thank you for using the application!", "Goodbye", MessageBoxButtons::OK, MessageBoxIcon::Information);
	Application::Exit();
}
};
}
