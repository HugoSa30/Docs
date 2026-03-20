/*
 * Program: n42.bin
 * Function: FUN_000a9590
 * Entry: 000a9590
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_000a9590(double param_1,double param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int local_48;
  float local_44;
  
  dVar6 = (double)(float)param_2;
  iVar2 = param_3[1];
  piVar3 = param_3 + 2 + *param_3;
  FUN_000a7908((double)(float)param_1,param_3 + 2,*param_3,&local_48);
  iVar1 = local_48;
  dVar5 = (double)local_44;
  FUN_000a7908((double)(float)dVar6,piVar3,iVar2,&local_48);
  iVar1 = iVar1 * iVar2;
  dVar6 = (double)(float)piVar3[iVar2 + iVar1 + local_48];
  if (local_44 != _DAT_0001ae94) {
    dVar6 = (double)(float)((double)local_44 *
                            (double)(float)((double)(float)piVar3[iVar2 + iVar1 + local_48 + 1] -
                                           dVar6) + dVar6);
  }
  if ((float)dVar5 != _DAT_0001ae94) {
    dVar4 = (double)(float)piVar3[iVar1 + iVar2 * 2 + local_48];
    if (local_44 != _DAT_0001ae94) {
      dVar4 = (double)(float)((double)local_44 *
                              (double)(float)((double)(float)piVar3[iVar1 + iVar2 * 2 + local_48 + 1
                                                                   ] - dVar4) + dVar4);
    }
    dVar6 = (double)(float)(dVar5 * (double)(float)(dVar4 - dVar6) + dVar6);
  }
  return dVar6;
}

