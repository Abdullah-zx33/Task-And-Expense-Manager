# 🗂️ Task-And-Expense-Manager

This is a **C++/CLI WinForms GUI Project** that lets users manage **tasks** and **expenses**, storing everything in a **SQL Server database**. It's beginner-friendly and a great intro project for GUI + database integration!

---

## 🧠 Features

✅ Add / Edit / Delete Expenses  
✅ Add / Edit / Delete Tasks  
✅ View Session Summaries with Category Breakdown  
✅ Budget Tracking (Total, Used, Remaining)  
✅ Export Summary to PDF (via iTextSharp)  
✅ SQL Server Integration (Localhost)

---

## 🗃️ Database Info

- **Tested on:** Local SQL Server  
- **Database Name:** `TaskNTrackDB`  
- **Script Location:** `sql/TaskNTrackDB.sql`

### ⚙️ How to Set It Up

1. Open **SQL Server Management Studio (SSMS)**
2. Create the database by running this SQL script:
   - Path: `sql/TaskNTrackDB.sql` *(included in the repository)*
3. Make sure the connection string in your code is:

```cpp
String^ connStr = "Data Source=.;Initial Catalog=TaskNTrackDB;Integrated Security=True";
