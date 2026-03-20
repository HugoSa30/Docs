/*
 * Program: n42.bin
 * Function: FUN_0013de1c
 * Entry: 0013de1c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013de1c(char *param_1,undefined *param_2,undefined4 param_3,int param_4,undefined param_5,
                 undefined *param_6,undefined *param_7)

{
  char cVar1;
  int unaff_r31;
  
  cVar1 = *(char *)(param_4 + -0x54c9);
  if (cVar1 != '\0') {
    cVar1 = cVar1 + -1;
    *(char *)(param_4 + -0x54c9) = cVar1;
    if (cVar1 == '\0') {
      *param_7 = 1;
    }
    else {
      *param_7 = 0;
    }
  }
  *param_6 = param_5;
  *param_2 = (char)unaff_r31;
  if ((((*param_1 != '\0') && (unaff_r31 != 0)) && (B_brems == '\0')) &&
     ((VDKUPPLMN < vfzg && (anzgangw != 0xff)))) {
    anzgangw = anzgangw + 1;
  }
  return;
}

