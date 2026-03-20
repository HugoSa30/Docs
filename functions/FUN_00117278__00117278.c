/*
 * Program: n42.bin
 * Function: FUN_00117278
 * Entry: 00117278
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00117278(int *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_1;
  *puVar1 = *puVar1;
  *(undefined *)(*param_1 + 1) = puVar1[1];
  *(undefined *)(*param_1 + 2) = DAT_003fb32e;
  *(undefined *)(*param_1 + 3) = dnsacmv;
  *(undefined *)(*param_1 + 4) = DAT_005b89fa;
  *(undefined *)(*param_1 + 5) = dnfsacmv;
  *(undefined *)(*param_1 + 6) = DAT_003fb32f;
  *(undefined2 *)(param_1 + 2) = 7;
  *(undefined *)((int)param_1 + 10) = 1;
  return;
}

