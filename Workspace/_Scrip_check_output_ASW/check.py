import openpyxl
import sys

path_excel=str(sys.argv[1])
wb = openpyxl.load_workbook(path_excel)
sheet_Summary = wb['Summary']
print("         C0 C1  :", sheet_Summary['A6'].value )
print("         MCDC   :", sheet_Summary['B6'].value )
print("         Reason :", sheet_Summary['C6'].value )
wb.close()

 
