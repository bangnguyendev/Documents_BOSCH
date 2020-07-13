import openpyxl
import sys


path_excel=str(sys.argv[1])
wb = openpyxl.load_workbook(path_excel, data_only=True)
sheet_Summary = wb['Summary']
print ("                C0 C1........................", sheet_Summary['A6'].value)
print ("                MCDC.........................", sheet_Summary['B6'].value)
print ("    Reason : ", sheet_Summary['C6'].value)
print ("")
print ("===============")
try:
    sheet_Testcases = wb['Testcases']
except Exception as e:  
    sheet_Testcases = wb.worksheets[3]

'''Check input'''
TC_No = 1
Row_Tolerance = 18
Row_Type = 19
Row_Max = 20
Row_Min = 21
Row_Title = 22
Row_Name_Var = 23
Row_TC1 = 24
max_row_table = sheet_Testcases.max_row
max_column_table = sheet_Testcases.max_column
''''''
for i in range(Row_TC1,max_row_table):
    if str(sheet_Testcases.cell(i, TC_No).value) == 'None' :
        max_row_table = i
        break
        
'''Check TM name'''
if str(sheet_Testcases.cell(Row_Name_Var, TC_No).value) == 'None':
    print (" ====> Error: [A23] Thieu TM_ name")


'''Check input cont'''
for col in range(1,max_column_table+1):
    if str(sheet_Testcases.cell(Row_Title, col).value) == 'INPUTS':
        col_start_input = col
        break

for col in range(col_start_input + 1,max_column_table+1):
    if str(sheet_Testcases.cell(Row_Title, col).value) != 'None':
        col_end_input = col
        break
 
for col in range(col_start_input,col_end_input):
    if str(sheet_Testcases.cell(Row_Type, col).value) == 'cont':
        try:
            value_tol=float(sheet_Testcases.cell(Row_Tolerance, col).value)
        except Exception as e:  
            value_tol = 'None'
            print (" ====> Error: Thieu Tolerance", str(sheet_Testcases.cell(Row_Name_Var, col).value))
        value_max=float(sheet_Testcases.cell(Row_Max, col).value)
        value_min=float(sheet_Testcases.cell(Row_Min, col).value)

        flag_not_out_max = 0
        flag_not_out_min = 0
        flag_not_mid_value = 0
        
        '''Check input out max'''
        for row in range(Row_TC1,max_row_table): 
            if float(sheet_Testcases.cell(row, col).value) > value_max :
                flag_not_out_max = 0
                break
            else :
                flag_not_out_max = 1
        '''Check input out min'''
        for row in range(Row_TC1,max_row_table): 
            if float(sheet_Testcases.cell(row, col).value) < value_min :
                flag_not_out_min = 0
                break
            else :
                flag_not_out_min = 1        
        '''Check input not mid value'''
        for row in range(Row_TC1,max_row_table): 
            if float(sheet_Testcases.cell(row, col).value) < value_max and float(sheet_Testcases.cell(row, col).value) > value_min :
                flag_not_mid_value = 0 
                break
            else :
                flag_not_mid_value = 1   
        '''print resuit'''                
        if flag_not_out_max == 1:
            print ("None out max: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))
        if flag_not_out_min == 1:
            print ("None out min: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))
        if flag_not_mid_value == 1:
            print ("None mid value: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))

'''Check input log'''
for col in range(col_start_input,col_end_input):
    if str(sheet_Testcases.cell(Row_Type, col).value) == 'log':
        flag_true = 0   
        flag_false = 0     
        for row in range(Row_TC1,max_row_table):

            if str(sheet_Testcases.cell(row, col).value) == 'True':
                flag_true = 1
            if str(sheet_Testcases.cell(row, col).value) == 'False':
                flag_false = 1
            
            if str(sheet_Testcases.cell(row, col).value) != 'True' and str(sheet_Testcases.cell(row, col).value) != 'False':
                print (" ====> Error: Sai dinh dang Bool ",str(sheet_Testcases.cell(Row_Name_Var, col).value))
                
        if flag_true == 1 and flag_false == 1:
            pass
        else :
            print ("Thieu TRUE/FALSE: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))
            
'''Check input enum'''
for col in range(col_start_input,col_end_input):
    if str(sheet_Testcases.cell(Row_Type, col).value) == 'enum':
        print ("Check enum: ", str(sheet_Testcases.cell(Row_Name_Var, col).value))

'''Check variable as input enum'''
flag_yes_as_input = 0
for col in range(1,max_column_table+1):
    if str(sheet_Testcases.cell(Row_Title, col).value) == 'LOCAL VARIABLES AS INPUT':
        flag_yes_as_input = 1
        col_start_as_input = col
        break
if flag_yes_as_input == 1:
    for col in range(col_start_as_input + 1,max_column_table+1):
        if str(sheet_Testcases.cell(Row_Title, col).value) != 'None':
            col_end_as_input = col
            break
            
    for col in range(col_start_as_input,col_end_as_input):
        if str(sheet_Testcases.cell(Row_Type, col).value) == 'cont':
            try:
                value_tol=float(sheet_Testcases.cell(Row_Tolerance, col).value)
            except Exception as e:  
                value_tol = 'None'
                print (" ====> Error: Thieu Tolerance", str(sheet_Testcases.cell(Row_Name_Var, col).value))
            
            value_max=float(sheet_Testcases.cell(Row_Max, col).value)
            value_min=float(sheet_Testcases.cell(Row_Min, col).value)

            flag_max = 0
            flag_out_max = 0
            flag_min = 0
            flag_out_min = 0
            flag_mid_value = 0
            
            '''Check input out max'''
            for row in range(Row_TC1,max_row_table): 
                if float(sheet_Testcases.cell(row, col).value) == value_max :
                    flag_max = 1
  
                if float(sheet_Testcases.cell(row, col).value) > value_max :
                    flag_out_max = 1


            '''Check input out min'''
            for row in range(Row_TC1,max_row_table): 
                if float(sheet_Testcases.cell(row, col).value) == value_min :
                    flag_min = 1

                if float(sheet_Testcases.cell(row, col).value) < value_min :
                    flag_out_min = 1

     
            '''Check input not mid value'''
            for row in range(Row_TC1,max_row_table): 
                if float(sheet_Testcases.cell(row, col).value) < value_max and float(sheet_Testcases.cell(row, col).value) > value_min :
                    flag_mid_value = 0 
                    break
                else :
                    flag_mid_value = 1   
            '''print resuit'''          
            if flag_max == 0:
                print ("None value max: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))   
            if flag_min == 0:
                print ("None value min: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))     
            if flag_mid_value == 1:
                print ("None mid value: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))                
            if flag_out_max == 1:
                print ("Out range max: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))
            if flag_out_min == 1:
                print ("Out range min: ",str(sheet_Testcases.cell(Row_Name_Var, col).value))

        
wb.close()

 
