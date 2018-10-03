// index page:http://curl.haxx.se/
//
#include <iostream>
#include <stdio.h>
#include <curl/curl.h>
using namespace std;

/*
 *
 *
 */

static size_t downloadCallback(void *buffer, size_t sz, size_t nmemb, void *writer)
{
    string *psResponse = (string*) writer;
    size_t size = sz * nmemb;
    psResponse->append((char*)buffer, size);

    return sz*nmemb;
}

int main(void)
{
    string strUrl = "http://www.baidu.com";
    string strTmpStr;
    CURL *curl = curl_easy_init();  //curl init

    curl_easy_setopt(curl, CURLOPT_URL, strUrl.c_str());    // set download URL.
    curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1L);       
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 2);             // set timeout.
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, downloadCallback);    //write data function
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &strTmpStr);  //write data var.

    CURLcode res = curl_easy_perform(curl); //Download
    curl_easy_cleanup(curl);    // release curl source.
    string strRsp;
    if(res != CURLE_OK) // download is OK.
    {
        strRsp = "error";
    }
    else
    {
        strRsp = strTmpStr;
    }

    printf("strRsp is |%s|\n", strRsp.c_str());

    return 0;
}

