/*
 * Program: n42.bin
 * Function: FUN_0010589c
 * Entry: 0010589c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0010589c(uint *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  short sVar5;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint *local_3c;
  uint local_38;
  uint local_34;
  
  if ((param_4 == (undefined4 *)0x0) || (*(char *)param_4 == '\0')) {
    sVar6 = FUN_001056cc(param_3);
    if (sVar6 < 0) {
      uVar4 = 0xffffffff;
    }
    else {
      sVar5 = FUN_001056cc(param_1);
      local_44 = CONCAT22(local_44._0_2_,sVar5);
      local_40 = *param_1;
      *param_1 = 0;
      local_40 = local_40 & 0xffff;
      local_48 = CONCAT22(local_48._0_2_,sVar5 - sVar6);
      if (-1 < (short)(sVar5 - sVar6)) goto LAB_0010594c;
LAB_00105c68:
      *param_1 = (int)local_40._2_2_;
      FUN_0010563c(param_1);
      FUN_001056a0(param_1,param_2);
      if (param_4 != (undefined4 *)0x0) {
        *(char *)param_4 = '\0';
      }
      uVar4 = 0;
    }
  }
  else {
    local_48 = *param_4;
    local_44 = param_4[1];
    local_40 = param_4[2];
    local_38 = param_4[4];
    do {
      if (local_40._0_2_ == 0) {
        local_3c = param_1 + ((int)local_44._2_2_ >> 5) + 1;
        uVar3 = (int)local_48._2_2_ & 0x1f;
        if (((int)local_44._2_2_ & 0x1fU) < uVar3) {
          local_34 = *local_3c << (-(int)local_48._2_2_ & 0x1fU);
          local_3c = local_3c + -1;
        }
        else {
          local_34 = 0;
        }
        iVar2 = *param_3;
        sVar6 = (short)iVar2;
        while (0 < sVar6) {
          local_38 = *local_3c >> uVar3 | local_34;
          local_44._0_2_ = (short)iVar2;
          if (local_38 < (uint)param_3[local_44._0_2_]) goto LAB_00105c10;
          if ((uint)param_3[local_44._0_2_] < local_38) break;
          if (uVar3 != 0) {
            local_34 = *local_3c << (-(int)local_48._2_2_ & 0x1fU);
          }
          iVar2 = iVar2 + -1;
          local_3c = local_3c + -1;
          sVar6 = (short)iVar2;
        }
      }
      local_3c = param_1 + ((int)local_48._2_2_ >> 5) + 1;
      uVar1 = local_40._2_2_;
      local_40 = local_40 & 0xffff;
      local_34 = 0;
      local_44._0_2_ = 1;
      if (0 < (short)*param_3) {
        local_44._0_2_ = 1;
        sVar6 = 0;
        uVar3 = (int)local_48._2_2_ & 0x1f;
        do {
          local_38 = param_3[local_44._0_2_] << uVar3 | local_34;
          if (uVar3 != 0) {
            local_34 = (uint)param_3[local_44._0_2_] >> (-(int)local_48._2_2_ & 0x1fU);
          }
          if (((sVar6 == 0) || (local_38 = local_38 + 1, local_38 != 0)) && (local_38 <= *local_3c))
          {
            sVar6 = 0;
          }
          else {
            sVar6 = 1;
          }
          *local_3c = *local_3c - local_38;
          local_3c = local_3c + 1;
          local_44._0_2_ = local_44._0_2_ + 1;
        } while (local_44._0_2_ <= (short)*param_3);
        local_40 = CONCAT22(sVar6,uVar1);
      }
      local_34 = local_34 + (int)local_40._0_2_;
      uVar3 = *local_3c;
      if (local_34 != 0) {
        *local_3c = uVar3 - local_34;
        local_3c = local_3c + 1;
        if (uVar3 < local_34) {
          uVar3 = *local_3c;
          *local_3c = uVar3 - 1;
          while (uVar3 == 0) {
            local_3c = local_3c + 1;
            uVar3 = *local_3c;
            *local_3c = uVar3 - 1;
          }
          local_3c = local_3c + 1;
        }
      }
LAB_00105c10:
      local_40 = (uint)CONCAT12((param_1[((int)local_44._2_2_ >> 5) + 1] &
                                1 << ((int)local_44._2_2_ & 0x1fU)) != 0,local_40._2_2_);
      sVar6 = local_48._2_2_ + -1;
      local_48 = CONCAT22(local_48._0_2_,sVar6);
      local_44 = CONCAT22(local_44._0_2_,local_44._2_2_ + -1);
      if (sVar6 < 0) goto LAB_00105c68;
LAB_0010594c:
    } while ((((local_44 & 3) != 0) || (param_4 == (undefined4 *)0x0)) ||
            (iVar2 = FUN_001268c4(), iVar2 == 0));
    local_48 = CONCAT13(1,local_48._1_3_);
    *param_4 = local_48;
    param_4[1] = local_44;
    param_4[2] = local_40;
    param_4[3] = local_3c;
    param_4[4] = local_38;
    param_4[5] = local_34;
    uVar4 = 1;
  }
  return uVar4;
}

