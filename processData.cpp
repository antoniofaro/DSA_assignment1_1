/*
* =========================================================================================
* Name        : processData.cpp
* Description : student code for Assignment 1 - Data structures and Algorithms - Fall 2017
* =========================================================================================
*/
#include "eventLib.h"
#include "dbLib.h"
#include "listLib.h"


//Mã yêu cầu 01: Số hiệu ninja được lưu trữ đầu tiên
template <class T>
int event01(){
	return _pHead->data.id;
}
//Mã yêu cầu 02: Số hiệu ninja được lưu trữ cuối cùng
template <class T>
int event02(){
	L1List<NinjaInfo_t> *pRun = new L1List<NinjaInfo_t>;
	for (pRun = _pHead; pRun->pNext == NULL; pRun = pRun->pNext){
		if (pRun->pNext == NULL) return pRun->data.id;
	}
}
 //Mã yêu cầu 03: Số phần tử tham gia cuộc thi
template <class T>
int event03(){
	int count = 0;
	L1List<NinjaInfo_t> *pRun = new L1List<NinjaInfo_t>;
	for (pRun = _pHead; pRun->pNext == NULL; pRun = pRun->pNext){
		if (pRun->data.id != pRun->pNext->data.id)
			count++;
	}
	return count;
}
 //Mã yêu cầu 04: Số hiệu lớn nhất của ninja tham gia cuộc thi
template <class T>
int event04(){
	int max = _pHead->data.id;
	L1List<NinjaInfo_t> *pRun = new L1List<NinjaInfo_t>;
	for (pRun = _pHead; pRun->pNext == NULL; pRun = pRun->pNext){
		if (pRun->data.id == max)
			max = pRun->data.id;
	}
	return max;
}


bool processEvent(ninjaEvent_t& event, L1List<NinjaInfo_t>& nList) {
	
	// Mở và đọc file events.txt và data.csv
	//char *fName1 = "events.txt";
	//char *fName2 = "data.csv";
	//L1List<NinjaInfo_t> de = &fName2;
	//loadNinjaDB(fName1, db);
	//loadEvents(fName1, db);
	//loadNinjaDB(fName2, de);
	//loadEvents(fName2, de);


	//Mã yêu cầu 1: Dem so phan tu trong events.txt

	
	//Mã yêu cầu 3: Tìm ra số hiệu ninja max trong data.csv
	

	// TODO: Your code comes here

	/// NOTE: The output of the event will be printed on one line
	/// end by the endline character.
	return true;
}

/* Class1: Time (Ngày, tháng, năm, giờ, phút, giây)
*/