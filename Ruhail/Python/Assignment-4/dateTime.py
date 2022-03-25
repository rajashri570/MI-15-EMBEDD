# Program 5 : Write a Python program to get the system time.


from asyncio import current_task
from datetime import datetime

now = datetime.now()

current_time = now.strftime("%H:%M:%S")
print("Current Time = ", current_time)