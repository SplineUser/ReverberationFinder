# Reverberation Time Finder

This Python script calculates the reverberation time (T), surface area (A), or room volume (V) based on the inputs provided by the user.

## How It Works

1. When you run the script, you will be asked what you want to find: `T` (reverberation time), `A` (surface area), or `V` (room volume). If you leave the input empty, the default calculation is for `T`.
2. The script then asks you to input the necessary values to calculate the missing variable:
   - If calculating `T`, you need to input values for `V` (volume) and `A` (surface area).
   - If calculating `A`, you need to input values for `T` (reverberation time) and `V` (volume).
   - If calculating `V`, you need to input values for `T` (reverberation time) and `A` (surface area).
3. The script will return the calculated value.

## Formulae

The script uses the Sabine formula for reverberation time:

- **Reverberation Time (T)**:  
  `T = 0.161 * (V / A)`
- **Surface Area (A)**:  
  `A = 0.161 * (V / T)`
- **Volume (V)**:  
  `V = (T * A) / 0.161`

## Example

```bash
$ python reverberation_time_finder.py
Welcome to the reverberation time finder!
What do you want to find? A/T/V, Leave empty for T:
T
Input value of V: 250
Input value of A: 50
The value of T is 0.805
```

## Requirements
1. Python 3.x

## How to run
1. Clone the script
2. Run the script in a python environment
3. python reverberation_time_finder.py
