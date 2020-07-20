import sys
import openpyxl
import win32com.client
from win32com.client import Dispatch


# '''variable const'''
# name_user = 'EXTERNAL Nguyen Duy Bang (Ban Vien, RBVH/EPS45)'

# color_Red = '\x1b[91m '
# color_Green = '\x1b[92m '
# color_Yellow = '\x1b[93m '
# color_Orange = '\x1b[38;5;208m '
# color_White = '\x1b[0m '
# E_OK = True
# E_NOT_OK = False


xl = win32com.client.Dispatch('Excel.Application')
wb = xl.Workbooks.Open('C:\\_DatabaseWork\\Thang_7\\PSW\\20200717\\RN_CARBON_BB80081\\OUTPUT_PSW_COPY\OUTPUT_EXCEL\\NET_GenericInterfaces_CodeCoverage_or_Fail_Reason.xls')
readData = wb.WorkSheets('Unit_Test_Info')
allData = readData.UsedRange 

readCell = allData.Cells(1,6)
print("okkkkk" , readCell)
print("okkkkk" , allData.Rows.count)


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