/*
 * Program: n42.bin
 * Function: FUN_000b4890
 * Entry: 000b4890
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000b4890(uint *param_1)

{
  char cVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  cVar1 = *(char *)((int)param_1 + 0xf);
  if (cVar1 == '\x01') {
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined *)((int)param_1 + 0xf) = 2;
      *(undefined *)((int)param_1 + 0xe) = 0;
      *(undefined2 *)((int)param_1 + 10) = 0;
      *param_1 = 0;
    }
    else if (*(char *)((int)param_1 + 0xd) != '\0') {
      *(undefined *)((int)param_1 + 0xf) = 4;
      *(undefined *)((int)param_1 + 0xe) = 2;
      uVar4 = *(ushort *)((int)param_1 + 10) + 1;
      if (0xffff < uVar4) {
        uVar4 = 0xffff;
      }
      uVar2 = (*param_1 >> 1) + (uint)(*(ushort *)(param_1 + 2) >> 1);
      if (0x7fffffff < uVar2) {
        uVar2 = 0x7fffffff;
      }
      uVar2 = uVar2 * 2;
      if ((uVar4 & 0xffff) != 0) {
        uVar2 = uVar2 / (uVar4 & 0xffff);
      }
      if (uVar2 < 0x10000) {
        uVar3 = (undefined2)uVar2;
      }
      else {
        uVar3 = 0xffff;
      }
      *(undefined2 *)(param_1 + 1) = uVar3;
      *(undefined2 *)((int)param_1 + 10) = 0;
      *param_1 = 0;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined2 *)(param_1 + 1) = *(undefined2 *)((int)param_1 + 6);
    }
    else {
      *(undefined *)((int)param_1 + 0xf) = 1;
      *(undefined *)((int)param_1 + 0xe) = 1;
    }
  }
  else if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined *)((int)param_1 + 0xf) = 2;
      *(undefined *)((int)param_1 + 0xe) = 0;
      *(undefined2 *)((int)param_1 + 10) = 0;
      *param_1 = 0;
    }
    else if (*(char *)((int)param_1 + 0xd) == '\0') {
      uVar4 = *(ushort *)((int)param_1 + 10) + 1;
      if (uVar4 < 0x10000) {
        uVar3 = (undefined2)uVar4;
      }
      else {
        uVar3 = 0xffff;
      }
      *(undefined2 *)((int)param_1 + 10) = uVar3;
      uVar4 = (*param_1 >> 1) + (uint)(*(ushort *)(param_1 + 2) >> 1);
      if (0x7fffffff < uVar4) {
        uVar4 = 0x7fffffff;
      }
      *param_1 = uVar4 * 2;
    }
    else {
      *(undefined *)((int)param_1 + 0xf) = 4;
      *(undefined *)((int)param_1 + 0xe) = 2;
      uVar4 = *(ushort *)((int)param_1 + 10) + 1;
      if (0xffff < uVar4) {
        uVar4 = 0xffff;
      }
      uVar2 = (*param_1 >> 1) + (uint)(*(ushort *)(param_1 + 2) >> 1);
      if (0x7fffffff < uVar2) {
        uVar2 = 0x7fffffff;
      }
      uVar2 = uVar2 * 2;
      if ((uVar4 & 0xffff) != 0) {
        uVar2 = uVar2 / (uVar4 & 0xffff);
      }
      if (uVar2 < 0x10000) {
        uVar3 = (undefined2)uVar2;
      }
      else {
        uVar3 = 0xffff;
      }
      *(undefined2 *)(param_1 + 1) = uVar3;
      *(undefined2 *)((int)param_1 + 10) = 0;
      *param_1 = 0;
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined *)((int)param_1 + 0xf) = 2;
      *(undefined *)((int)param_1 + 0xe) = 0;
      *(undefined2 *)((int)param_1 + 10) = 0;
      *param_1 = 0;
    }
    else if (*(char *)((int)param_1 + 0xd) == '\0') {
      uVar4 = *(ushort *)((int)param_1 + 10) + 1;
      if (uVar4 < 0x10000) {
        uVar3 = (undefined2)uVar4;
      }
      else {
        uVar3 = 0xffff;
      }
      *(undefined2 *)((int)param_1 + 10) = uVar3;
      uVar4 = (*param_1 >> 1) + (uint)(*(ushort *)(param_1 + 2) >> 1);
      if (0x7fffffff < uVar4) {
        uVar4 = 0x7fffffff;
      }
      *param_1 = uVar4 * 2;
    }
    else {
      *(undefined *)((int)param_1 + 0xf) = 3;
      *(undefined *)((int)param_1 + 0xe) = 3;
      uVar4 = *(ushort *)((int)param_1 + 10) + 1;
      if (uVar4 < 0x10000) {
        uVar3 = (undefined2)uVar4;
      }
      else {
        uVar3 = 0xffff;
      }
      *(undefined2 *)((int)param_1 + 10) = uVar3;
      uVar4 = (*param_1 >> 1) + (uint)(*(ushort *)(param_1 + 2) >> 1);
      if (0x7fffffff < uVar4) {
        uVar4 = 0x7fffffff;
      }
      *param_1 = uVar4 * 2;
    }
  }
  else {
    *(undefined *)((int)param_1 + 0xf) = 2;
    *(undefined *)((int)param_1 + 0xe) = 0;
    *(undefined2 *)((int)param_1 + 10) = 0;
    *param_1 = 0;
  }
  return;
}

