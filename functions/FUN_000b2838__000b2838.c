/*
 * Program: n42.bin
 * Function: FUN_000b2838
 * Entry: 000b2838
 * Exported by: ExportAllDecompiledFunctions.java
 */


double FUN_000b2838(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(float)param_3;
  dVar2 = (double)(float)param_2;
  if ((dVar2 <= dVar1) && (dVar1 = dVar2, dVar2 < (double)(float)param_1)) {
    dVar1 = (double)(float)param_1;
  }
  return dVar1;
}

