from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC

id_B2B = "a5124171"
link_IEDriverServer = "D:\\Git_NDB\\Documents\\_FreeCommander\\B2B\\IEDriverServer.exe"
link_B2B = "https://b2b-gateway.renesas.com/login/ssl"
arr = ["SMX_BTN_16", "SMX_BTN_20", "SMX_BTN_24", "SMX_BTN_28", "SMX_BTN_29", "SMX_BTN_30", "SMX_BTN_31", "SMX_BTN_44"]

driver = webdriver.Ie(link_IEDriverServer)
driver.get(link_B2B)
driver.implicitly_wait(30) # seconds
try:
	driver.find_element_by_name('LOGIN_ID').send_keys(id_B2B)
	driver.find_element_by_class_name("btnCustom").click()
	password=""
	print("Login: " + id_B2B)
	for i in arr:
		ID_BTN = driver.find_element_by_id(i)
		pass_temp = ID_BTN.get_attribute("alt")
		password += pass_temp
	driver.find_element_by_name("PASSWORD").send_keys(password)
	print("Pass : " + password)
	driver.find_element_by_class_name("btnCustom").click()
	print("Waiting...")

	element = WebDriverWait(driver, 30).until(EC.presence_of_element_located((By.ID, "table_LoginPage_5")))    
	print("Please connect VPN.")
	print("Could not connect to B2b. Please try again")
except:
	element = WebDriverWait(driver, 70).until(EC.presence_of_element_located((By.ID, "table_welcome_2")))    
	print("Welcome to the Secure Access SSL VPN, " + driver.find_element_by_class_name("cssSmall").text)
	print("Quit IE.")
	driver.quit()
finally:
	print("Done.")
