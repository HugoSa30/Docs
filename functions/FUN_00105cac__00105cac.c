/*
 * Program: n42.bin
 * Function: FUN_00105cac
 * Entry: 00105cac
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4
FUN_00105cac(undefined4 param_1,int param_2,undefined4 *param_3,int *param_4,undefined4 param_5,
            undefined4 *param_6)

{
  bool bVar1;
  short sVar3;
  int iVar2;
  undefined4 uVar4;
  undefined uVar5;
  undefined4 local_28;
  
  if ((param_6 == (undefined4 *)0x0) || (*(char *)param_6 == '\0')) {
    if (*param_4 == 0) {
      uVar4 = 0xffffffff;
    }
    else {
      sVar3 = FUN_001056cc(param_2);
      local_28 = CONCAT22(local_28._0_2_,sVar3);
      iVar2 = (int)sVar3;
      if (iVar2 < 0) {
        param_3[1] = 1;
        *param_3 = 1;
      }
      else {
        FUN_001056a0(param_1,param_3);
        if (0 < iVar2) goto LAB_00105d5c;
LAB_00105e68:
        if (param_6 != (undefined4 *)0x0) {
          *(char *)param_6 = '\0';
        }
      }
      uVar4 = 0;
    }
  }
  else {
    uVar4 = *param_6;
    local_28._0_1_ = (char)((uint)uVar4 >> 0x18);
    bVar1 = local_28._0_1_ != '\x01';
    local_28 = uVar4;
    if (bVar1) goto LAB_00105e08;
    while (FUN_0010589c(param_5,param_3,param_4,param_6 + 1), *(char *)(param_6 + 1) == '\0') {
      while( true ) {
        if ((*(uint *)(param_2 + ((int)local_28._2_2_ >> 5) * 4 + 4) >>
             ((int)local_28._2_2_ & 0x1fU) & 1) != 0) {
          FUN_00105710(param_1,param_3,param_5);
          if (param_6 == (undefined4 *)0x0) {
            FUN_0010589c(param_5,param_3,param_4,0);
          }
          else {
            *(char *)(param_6 + 1) = '\0';
LAB_00105e08:
            FUN_0010589c(param_5,param_3,param_4,param_6 + 1);
            if (*(char *)(param_6 + 1) != '\0') {
              uVar5 = 2;
              goto LAB_00105e2c;
            }
          }
        }
        iVar2 = (int)local_28._2_2_;
        if (iVar2 < 1) goto LAB_00105e68;
LAB_00105d5c:
        local_28 = CONCAT22(local_28._0_2_,(short)iVar2 + -1);
        FUN_00105710(param_3,param_3,param_5);
        if (param_6 != (undefined4 *)0x0) break;
        FUN_0010589c(param_5,param_3,param_4,0);
      }
      *(char *)(param_6 + 1) = '\0';
    }
    uVar5 = 1;
LAB_00105e2c:
    local_28 = CONCAT13(uVar5,local_28._1_3_);
    *param_6 = local_28;
    uVar4 = 1;
  }
  return uVar4;
}

