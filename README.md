# derive
Calculate the derive

## Build
- Run `./scripts/build.sh`

## Config
You can replace this function with anything you would like to find the derivative of.
```c
double function(double x) {
  // f(x) = x^3 * 4 + 2
  return (pow(x, 3) * 4) + 2;
}
```

## Run
- Run `./cmake/derive > data/<output-filename>.csv`
- Run `python3 plotting/main.py`

![image](data/Figure_1.png)
