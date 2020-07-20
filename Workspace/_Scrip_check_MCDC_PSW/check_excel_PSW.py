import sys
import openpyxl
import win32com.client
from win32com.client import Dispatch


# '''variable const'''
name_user = 'EXTERNAL Nguyen Duy Bang (Ban Vien, RBVH/EPS45)'

color_Red = '\x1b[91m '
color_Green = '\x1b[92m '
color_Yellow = '\x1b[93m '
color_Orange = '\x1b[38;5;208m '
color_White = '\x1b[0m '
E_OK = True
E_NOT_OK = False


xl = win32com.client.Dispatch('Excel.Application')
wb = xl.Workbooks.Open('D:\\NguyenBangGitHub\\Documents_BOSCH\\Workspace\\_Scrip_check_MCDC_PSW\OUTPUT_EXCEL\\RBAPLCUST_4D21_EPB_Not_Immobilized_Vehicle_Warning_Read_CodeCoverage_or_Fail_Reason.xls')
readData = wb.WorkSheets('Unit_Test_Info')
allData = readData.UsedRange 

# Get number of rows used on active sheet
getNumRows = allData.Rows.Count
print ('Number of rows used in sheet : ',getNumRows)

#Get number of columns used on active sheet
getNumCols = allData.Columns.Count
print ('Number of columns used in sheet : ',getNumCols)

def get_value(row=0, col=0):
    return allData.Cells(row,col).value

for row in range(1, getNumRows +1):
    for col in range(1, getNumCols +1):
        if allData.Cells(row,col).value == "Tester":
            row_tester = row
            col_tester = col
            print(get_value(row,col))
        elif allData.Cells(row,col).value == "Date":
            row_date = row
            col_date = col
            print("Date")
        elif allData.Cells(row,col).value == "Item_Name":
            row_Item_Name = row
            col_Item_Name = col
            print("Item_Name")
        elif allData.Cells(row,col).value == "C0":
            row_C0 = row
            col_C0 = col
            print("C0")
        elif allData.Cells(row,col).value == "C1":
            row_C1 = row
            col_C1 = col
            print("C1")
        elif allData.Cells(row,col).value == "MCDC":
            row_MCDC = row
            col_MCDC = col
            print("MCDC")

# print(allData.Cells(row_tester,col_tester).value)


def print_error(string=None, col_checking=None):
    """
    Print red color
    col_checking is type int.
    """
    if col_checking is not None:
        print(color_Red + string + color_White + str(sheet_TCs.cell(Row_Name_Var, col_checking).value))
    else:
        print(color_Red + string + color_White)
    return


def print_notice(string=None, col_checking=None):
    """
    Print green color
    col_checking is type int.
    """
    if col_checking is not None:
        print(color_Green + string + color_White + str(sheet_TCs.cell(Row_Name_Var, col_checking).value))
    else:
        print(color_Green + string + color_White)
    return


def print_warning(string=None, col_checking=None):
    """
    Print yellow color
    col_checking is type int.
    """
    if col_checking is not None:
        print(color_Yellow + string + color_White + str(sheet_TCs.cell(Row_Name_Var, col_checking).value))
    else:
        print(color_Yellow + string + color_White)
    return


# 1