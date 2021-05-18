from selenium import webdriver
from selenium.webdriver.chrome.options import Options
import time
from datetime import datetime
from win10toast import ToastNotifier


from win10toast import ToastNotifier
toaster = ToastNotifier()


options = Options()
options.headless = True
options.add_argument("--window-size=1920,1200")
DRIVER_PATH = "D:\\Git_NDB\\Documents\\_Quick_Buttons\\B2B\\chromedriver.exe"

driver = webdriver.Chrome(options=options, executable_path=DRIVER_PATH)
driver.get("https://p2p.binance.com/vi/trade/buy/")
# a = driver.find_element_by_class_name("css-1m1f8hn").text
# print(driver.page_source)
driver.implicitly_wait(30)
# click nut "Mua"
driver.find_element_by_xpath("/html/body/div[1]/div[2]/main/div[3]/div/div/div[1]/div/div[1]").click()
driver.implicitly_wait(30)
# click nut "Chuyen tien te" Fiat
driver.find_element_by_xpath("/html/body/div[1]/div[2]/main/div[4]/div/div[1]/div[2]/div[2]/div[1]").click()
# Option click chon VND
driver.find_element_by_xpath('/html/body/div[1]/div[2]/main/div[4]/div/div[1]/div[2]/div[2]/div[3]/ul/li[66]').click()

driver.implicitly_wait(30)
# reload moi 5 giay
driver.find_element_by_xpath('/html/body/div[1]/div[2]/main/div[4]/div/div[2]/div/div[1]/button').click()

driver.find_element_by_xpath('/html/body/div[1]/div[2]/main/div[4]/div/div[2]/div/div[2]/div/div[2]').click()

while True:
    driver.implicitly_wait(30)
    # Thoi gian hien tai
    now = datetime.now()
    # dd/mm/YY H:M:S
    dt_string = now.strftime("%d/%m/%Y %H:%M:%S")
    print("Ngay va gio hien tai =", dt_string)	
    # name
    print(driver.find_element_by_xpath("/html/body/div[1]/div[2]/main/div[5]/div/div[2]/div[1]/div[1]/div[1]/div/div[1]/a").text)
    
    # Gia hien tai
    price = driver.find_element_by_xpath("/html/body/div[1]/div[2]/main/div[5]/div/div[2]/div[1]/div[1]/div[2]/div/div/div[1]").text
    # Loai tien te
    fiat = driver.find_element_by_xpath("/html/body/div[1]/div[2]/main/div[5]/div/div[2]/div[1]/div[1]/div[2]/div/div/div[2]").text
    # In gia tien hien tai ra man hinh
    print(price + " " + fiat)

    price2float_price = price.replace(",", "")
    float_price = float(price2float_price)
    msg_notification = "Gia hien tai là: " + price + " " + fiat
    if float_price <= 24100:
        toaster.show_toast(
            "Mua USDT",
            msg_notification,
            icon_path=None,
            duration=20
        )
    print("==============\n")
    # time delay
    time.sleep(5) 
    # reload 
    # click vào nút reload
    driver.find_element_by_xpath('/html/body/div[1]/div[2]/main/div[4]/div/div[2]/div/div[1]/button').click()
    # click vào option 5 giây
    driver.find_element_by_xpath('/html/body/div[1]/div[2]/main/div[4]/div/div[2]/div/div[2]/div/div[2]').click()

driver.quit()