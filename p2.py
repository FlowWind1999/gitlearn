# encoding:utf-8
import base64
import urllib
import urllib.request
import time

'''
通用物体和场景识别
'''
request_url = "https://aip.baidubce.com/rest/2.0/image-classify/v2/advanced_general"

# 二进制方式打开图片文件
f = open(r'杯子.jpg', 'rb')
img = base64.b64encode(f.read())

params = {"image":img}
params = urllib.parse.urlencode(params).encode('utf-8')

access_token = '24.bff4522f27978f1c2a9ff780cbf5734f.2592000.1565441901.282335-16782116'
request_url = request_url + "?access_token=" + access_token
request = urllib.request.Request(url=request_url, data=params)
request.add_header('Content-Type', 'application/x-www-form-urlencoded')
response = urllib.request.urlopen(request)
content = response.read()
fs=open("www.txt","wb")
fs.write(content)
fs.close()
content=content.decode("utf8")
print(content)

print(time.time())