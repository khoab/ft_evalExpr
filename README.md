# ft_evalExpr

This is one of the numerous projects done during the my 42 Piscine in May 2018.
It main mission is to solve basic mathematical expressions. The evaluator runs on **recursive descent parsing**
[explained here](http://www.strchr.com/expression_evaluator). I absolutely
recommend you read that article as it helped me tons while making this.
This was an assignment, so some things are not handled on purpose (see below).

##How long did it take me to finished?

_ 3 days. (At that moment, I was too new to C and not really good at coding. My school avarage time to finish is 1 week).

## Compiling
Run `make`, an executable called `eval_expr` should compile directly. Please
submit an issue if you run into any.

## Usage
`./eval_expr "expression"`

Example:
```
$ ./eval_expr "1 + 2 * (3 - 42) % 5"

-2
```

## Subject constraints
Please note the evaluator does not have error-handling of *any* kind. The
subject states that **all input must be valid**, so no error checking is
performed.

A valid expression:
* must only contain the operators `+`, `-`, `*`, `/`, and `%`
* must only have integer values
* can contain parentheses, but each group must be properly closed
* can contain spaces

Since we are doing whole number arithmetic, divisions are euclidian keeping
only the quotient, while the remainder can be obtained with a modulo operation.
