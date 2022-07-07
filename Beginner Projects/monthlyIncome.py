print('Welcome to the budget estimator!')
income = float(input('Enter your montly income {MMK}'))
additional = float(input('Enter any additional income your expect next month {MMK}'))

total_income = income + additional
print('Niceee! Your total income next month will be ' + str(total_income))
print('Now we will get some expenses data...')


def gather_expenses():
    housing = float(input('Enter your monthly housing expenses {MMK}'))
    utilities = float(input('Enter your monthly utilities expenses {MMK}'))
    food = float(input('Enter your monthly food expenses {MMK}'))
    misc = float(input('Enter your monthly misc expenses {MMK}'))
    total_expenses = housing + utilities + food + misc
    return total_expenses


expense_total = gather_expenses()
print('Niceee! Your total expenses next month will be ' + str(total_income))
margin = total_income - expense_total

if margin >= 0:
    print('Your total surplus next month will be ' + str(margin))
else:
    print('You will come up' + str(margin) + 'negative')

print('Thanks for using the montly budget tool!')
