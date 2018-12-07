//
//  requstURL.h
//  VincialignD
//
//  Created by 曹兆华 on 2018/5/23.
//  Copyright © 2018年 曹兆华. All rights reserved.
//

#ifndef requstURL_h
#define requstURL_h

//////BaseURL
//#define kHttpBaseURL @"http://114.55.25.100:9010/v3/API/"

//BaseURL
#define kHttpBaseURL [[NSUserDefaults standardUserDefaults] valueForKey:@"baseUrl"]

//正式环境
//#define kHttpBaseURL @"https://vip.vincialign.com/v3/API/"


//登录注册
//1、获取地址
#define kVDGetSignUpConfInfo [NSString stringWithFormat:@"%@get_select",kHttpBaseURL]

//2、验证邮箱是否存在
#define kVDCheckEmail [NSString stringWithFormat:@"%@check_email",kHttpBaseURL]

//3、验证手机号是否存在
#define kVDCheckMobile [NSString stringWithFormat:@"%@check_mobile",kHttpBaseURL]

//4、发送验证码
#define kVDSendCode [NSString stringWithFormat:@"%@send_captcha",kHttpBaseURL]

//5、注册
#define kVDRegister [NSString stringWithFormat:@"%@register",kHttpBaseURL]

//6、登陆
#define kVDLogin [NSString stringWithFormat:@"%@check_doctor",kHttpBaseURL]

//7、个人中心
#define kVDDoctor [NSString stringWithFormat:@"%@doctor",kHttpBaseURL]

//8、修改密码
#define kVDChangePW [NSString stringWithFormat:@"%@edit_password",kHttpBaseURL]

//8、忘记密码
#define kVDFindPSWPW [NSString stringWithFormat:@"%@find_password",kHttpBaseURL]

//8、发送邮件
#define kVDSendEmail [NSString stringWithFormat:@"%@send_email",kHttpBaseURL]

//9、医疗机构
#define kVDOrgList [NSString stringWithFormat:@"%@org_list",kHttpBaseURL]

//10、地址列表
#define kVDAddrList [NSString stringWithFormat:@"%@addr_list",kHttpBaseURL]

//11、添加机构
#define kVDAddOrg [NSString stringWithFormat:@"%@add_org",kHttpBaseURL]

//12、添加地址
#define kVDAddAddr [NSString stringWithFormat:@"%@add_addr",kHttpBaseURL]

//13、修改机构
#define kVDEditOrg [NSString stringWithFormat:@"%@edit_org",kHttpBaseURL]

//14、修改地址
#define kVDEditAddr [NSString stringWithFormat:@"%@edit_addr",kHttpBaseURL]

//15、修改手机号
#define kVDEditMobile [NSString stringWithFormat:@"%@edit_mobile",kHttpBaseURL]

//主页接口

//16、获取案例数量
#define kVDCaseNums [NSString stringWithFormat:@"%@case_nums",kHttpBaseURL]

//17、案例列表
#define kVDCaseList [NSString stringWithFormat:@"%@case_list",kHttpBaseURL]

//18、获取下拉菜单数据（机构列表，邮寄地址列表，快递列表）
#define kVDGetSelected [NSString stringWithFormat:@"%@get_select",kHttpBaseURL]

//19、机构 默认邮寄地址
#define kVDLoadMail [NSString stringWithFormat:@"%@load_mail",kHttpBaseURL]

//20、获取案例详情
#define kVDShow [NSString stringWithFormat:@"%@show",kHttpBaseURL]

//21、获取矫治器列表
#define kVDApplianceList [NSString stringWithFormat:@"%@appliance_list",kHttpBaseURL]

//21、获取3D方案列表
#define kVDResultList [NSString stringWithFormat:@"%@result_list",kHttpBaseURL]

//21、解析3D方案的jsonACC数据
#define kVDParseResult [NSString stringWithFormat:@"%@parse_result",kHttpBaseURL]

//21、批准方案
#define kVDApproveResult [NSString stringWithFormat:@"%@approve_result",kHttpBaseURL]

//21、检查方案是否可批准
#define kVDCheckResultStatus [NSString stringWithFormat:@"%@check_result_status",kHttpBaseURL]

//21、获取建议列表
#define kVDSuggestions [NSString stringWithFormat:@"%@suggestions",kHttpBaseURL]

//21、发送建议操作
#define kVDSendSuggestion [NSString stringWithFormat:@"%@send_suggestion",kHttpBaseURL]

//21、获取矫治概览
#define kVDOverView [NSString stringWithFormat:@"%@overview",kHttpBaseURL]


//21、删除病例
#define kVDDeleteCase [NSString stringWithFormat:@"%@delete",kHttpBaseURL]

//21、提交病例
#define kVDSubmitCase [NSString stringWithFormat:@"%@submit",kHttpBaseURL]

//21、提交单
#define kVDProfileCase [NSString stringWithFormat:@"%@profile",kHttpBaseURL]

//21、提交单
#define kVDProfileCase [NSString stringWithFormat:@"%@profile",kHttpBaseURL]

//21、加工后续-历史批次
#define kVDProcessHistory [NSString stringWithFormat:@"%@process_history",kHttpBaseURL]

//21、加工后续-展示
#define kVDProcessInfo [NSString stringWithFormat:@"%@process_info",kHttpBaseURL]

//21、加工后续-展示
#define kVDProcessNext [NSString stringWithFormat:@"%@process_next",kHttpBaseURL]

//21、阶段调整-获取案例信息
#define kVDAdjustInfo [NSString stringWithFormat:@"%@adjust_info",kHttpBaseURL]

//21、阶段调整-创建阶段调整案例
#define kVDAdjust [NSString stringWithFormat:@"%@adjust",kHttpBaseURL]

//21、申请替代-已申请
#define kVDApplyed [NSString stringWithFormat:@"%@applyed",kHttpBaseURL]

//21、申请替代-可申请
#define kVDApplyedInfo [NSString stringWithFormat:@"%@apply_info",kHttpBaseURL]

//21、申请替代-操作
#define kVDApplying [NSString stringWithFormat:@"%@applying",kHttpBaseURL]

//21、完成案例-(完成病例-未邮寄矫治器)
#define kVDFinishedInfo [NSString stringWithFormat:@"%@finished_info",kHttpBaseURL]

//21、完成案例-（完成案例-邮寄矫治器）
#define kVDFinishInfo [NSString stringWithFormat:@"%@finish_info",kHttpBaseURL]

//21、完成案例
#define kVDFinish [NSString stringWithFormat:@"%@finish",kHttpBaseURL]


//21、添加病例-添加病例信息
#define kVDCreate [NSString stringWithFormat:@"%@create",kHttpBaseURL]

//21、添加病例-编辑临床检查
#define kVDEditCheck [NSString stringWithFormat:@"%@edit_check",kHttpBaseURL]

//21、添加病例-编辑处方表信息
#define kVDEditTable [NSString stringWithFormat:@"%@edit_table",kHttpBaseURL]

//21、添加病例-编辑照片X片信息
#define kVDEditPic [NSString stringWithFormat:@"%@edit_pic",kHttpBaseURL]

//21、添加病例-模型文件
#define kVDEditMfile [NSString stringWithFormat:@"%@edit_mfile",kHttpBaseURL]

//21、完善病例-获取病例信息
#define kVDPatientInfo [NSString stringWithFormat:@"%@patient_info",kHttpBaseURL]

//21、完善病例-修改患者信息
#define kVDEditPatient [NSString stringWithFormat:@"%@edit_patient",kHttpBaseURL]

//21、完善病例-临床检查信息
#define kVDEditCheckInfo [NSString stringWithFormat:@"%@check_info",kHttpBaseURL]

//21、完善病例-处方表信息
#define kVDEditTableInfo [NSString stringWithFormat:@"%@table_info",kHttpBaseURL]

//21、完善病例-照片X片信息
#define kVDEditPicInfo [NSString stringWithFormat:@"%@pic_info",kHttpBaseURL]

//21、完善病例-模型文件
#define kVDEditMfileInfo [NSString stringWithFormat:@"%@mfile_info",kHttpBaseURL]


//版本更新
#define kVDVersion [NSString stringWithFormat:@"%@version",kHttpBaseURL]



#endif /* requstURL_h */
