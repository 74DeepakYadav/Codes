"""Compound Interest Calculator"""

account = int(input("Enter Initial Amount: "))
interest_rate = float(input("Enter the rate of interest: "))
interest_rate = interest_rate/100
years =int(input("Number of year: "))

print(f"Initial Amount: {account}")

counter = 1
while counter <= years:
    accrued_interest = account * interest_rate 
    account += accrued_interest 
    print (f"Year {counter}:{account}")
    counter += 1