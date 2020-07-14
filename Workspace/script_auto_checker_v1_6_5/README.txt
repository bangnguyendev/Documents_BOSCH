VERSION: 1.6.4
    - Support check ASW, PSW
    - Support check ASW Walkthrough (Missed making WT)

SETUP (file "./assets/settings.json")
    "file_summary": "//hc-ut40070c/duongnguyen/0000_Project/001_Prj/02_JOEM/Summary_JOEM_COEM_20200701.xlsm",
    - Directory INPUT for COEM or JOEM:
        + "dir_input_joem": "//hc-ut40070c/duongnguyen/0000_Project/001_Prj/02_JOEM/01_Output_Package/20200528/JOEM/RN_SUV_CRBS_BSS7x_dev",
        + "dir_input_coem": "C:/Users/nhi5hc/Desktop/Input/a",
    - Select Group:
        + "sheetname": "Merged_COEM",
    - Select Reviewer to make Walkthrough
        "reviewer": "hieu.nguyen-trung",
    - Select mode for COEM or JOEM:
        + "mode_coem": [
            "check_releases",
            "check_archives",
            "make_archives"
        ],

        + "mode_joem": [
            "check_archives",
            "make_archives"
        ],
    - Coordinate X/Y in your summary file (optinal):
        + "coordinator": {
            "begin": 59,
            "end": 1000
        },
        
    - Update info for each user if you want (optional):
        + "users": {
            "hieu.nguyen-trung": {"name": "EXTERNAL Nguyen Trung Hieu (Ban Vien), RBVH/EPS45", "id": "nhi5hc", "reviewer": "huy.nguyen-hoang"},
            "hau.nguyen-tai": {"name": "EXTERNAL Nguyen Tai Hau (Ban Vien), RBVH/EPS45", "id": "nah4hc", "reviewer": "khang.duong-chi"},
            "bang.nguyen-duy": {"name": "EXTERNAL Nguyen Duy Bang (Ban Vien), RBVH/EPS45", "id": "nbg7hc", "reviewer": "hau.nguyen-tai"},
            "dac.luu-cong": {"name": "EXTERNAL Luu Cong Dac (Ban Vien), RBVH/EPS45", "id": "lud5hc", "reviewer": "huy.do-anh"},
            "duong.nguyen-tuan": {"name": "EXTERNAL Nguyen Tuan Duong (Ban Vien), RBVH/EPS45", "id": "ndy4hc", "reviewer": "hieu.nguyen-trung"},
            "loc.do-phu": {"name": "EXTERNAL Do Phu Loc (Ban Vien), RBVH/EPS45", "id": "dol7hc", "reviewer": "duong.nguyen-tuan"},
            "thanh.nguyen-kim": {"name": "EXTERNAL Nguyen Kim Thanh (Ban Vien), RBVH/EPS45", "id": "nut4hc", "reviewer": "chuong.nguyen-minh"},
            "chung.ly": {"name": "EXTERNAL Ly Chung (Ban Vien), RBVH/EPS45", "id": "lyc1hc", "reviewer": "nam.phan-the"},
            "huy.do-anh": {"name": "EXTERNAL Do Anh Huy (Ban Vien), RBVH/EPS45", "id": "duh7hc", "reviewer": "dac.luu-cong"},
            "phuong.nguyen-thanh": {"name": "EXTERNAL Nguyen Thanh Phuong (Ban Vien), RBVH/EPS45", "id": "gup7hc", "reviewer": "chung.ly"},
            "khang.duong-chi": {"name": "EXTERNAL Duong Chi Khang (Ban Vien), RBVH/EPS45", "id": "lho81hc", "reviewer": "bang.nguyen-duy"},
            "chuong.nguyen-minh": {"name": "EXTERNAL Nguyen Minh Chuong (Ban Vien), RBVH/EPS45", "id": "nch7hc", "reviewer": "loc.do-phu"},
            "nam.phan-the": {"name": "EXTERNAL Phan The Nam (Ban Vien), RBVH/EPS45", "id": "pnh7hc", "reviewer": "phuong.nguyen-thanh"},
            "huy.nguyen-hoang": {"name": "EXTERNAL Nguyen Tran Hoang Huy (Ban Vien), RBVH/EPS45", "id": "hgy7hc", "reviewer": "thanh.nguyen-kim"}
        }
OPTION:
    + # Check Release is correct or not: check_releases
    + # Check Archive is correct or not: check_archives
    + # Create Archive Walkthrough: make_archieves
    + # Create Structure Of Folder Release: make_folder_release
    + # Convert summary exel to json file: create_summary_json_file
    + # Collect information for deliverables: collect_information_deliverables

RUN:
    Step 1: Update SETUP
    Step 2: Run app.exe
    Step 3: Enjoy