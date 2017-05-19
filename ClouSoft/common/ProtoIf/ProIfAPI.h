/*********************************************************************************************************
 * Copyright (c) 2010,深圳科陆电子科技股份有限公司
 * All rights reserved.
 *
 * 文件名称：ProIfAPI.h
 * 摘    要：本文件实现了通信接口函数定义
 * 当前版本：1.0
 * 作    者：岑坚宇
 * 完成日期：2010年1月
 * 备    注：
 *********************************************************************************************************/
#ifndef PROIFAPI_H
#define PROIFAPI_H

#include "apptypedef.h"

void InitProIf();
bool SetSockLed(bool fLight);

#endif //PROIFAPI_H