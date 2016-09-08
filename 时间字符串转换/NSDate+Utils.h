//
//  NSDate+Utils.h
//  BloodSugar
//
//  Created by PeterPan on 13-12-27.
//  Copyright (c) 2013年 shake. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSDate (Utils)

+ (NSDate *)dateWithYear:(NSInteger)year
                   month:(NSInteger)month
                     day:(NSInteger)day
                    hour:(NSInteger)hour
                  minute:(NSInteger)minute
                  second:(NSInteger)second;

+ (NSInteger)daysOffsetBetweenStartDate:(NSDate *)startDate endDate:(NSDate *)endDate;

+ (NSDate *)dateWithHour:(int)hour
                  minute:(int)minute;

#pragma mark - Getter
- (NSInteger)year;
//季度
- (NSString *)quarter;
- (NSInteger)quarterInteger;
- (NSInteger)month;
- (NSInteger)day;
- (NSInteger)hour;
- (NSInteger)minute;
- (NSInteger)second;
- (NSString *)weekday;

//一周开始时间和结束时间
- (NSString *)currentWeekBeginTimeAndEndTime;
 //返回固定格式的一周开始时间和结束时间
- (NSString *)currentWeekBeginTimeAndEndTimeWithDateFormatterString:(NSString *)dateFormatterString;
//一个月开始时间和结束时间
- (NSString *)currentMonthBeginTimeAndEndTime;
//返回固定格式的一个月开始时间和结束时间
- (NSString *)currentMonthBeginTimeAndEndTimeWithDateFormatterString:(NSString *)dateFormatterString;

//一个季度的开始时间和结束时间
- (NSString *)currentQuarterBeginTimeAndEndTime;
//返回固定格式的一个季度开始时间和结束时间
- (NSString *)currentQuarterBeginTimeAndEndTimeWithDateFormatterString:(NSString *)dateFormatterString;

//一年的开始时间和结束时间
- (NSString *)currentYearBeginTimeAndEndTime;
//返回固定格式的一年开始时间和结束时间
- (NSString *)currentYearBeginTimeAndEndTimeWithDateFormatterString:(NSString *)dateFormatterString;

//返回一年中的第几周
- (NSString *)weekOfYear;
//返回第几年周的开始时间和结束时间第几周
- (NSString *)yearWeekStartEndWeekOfYear;

//返回年数和一年的第几周
- (NSString *)yearWithWeekOfYear;
//年数和月份
- (NSString *)yearWithMonthOfYear;
//年数和季度
- (NSString *)yearWithQuarterOfYear;
//年数
- (NSString *)yearStr;

#pragma mark - Time string
- (NSString *)timeHourMinute;
- (NSString *)timeHourMinuteWithPrefix;
- (NSString *)timeHourMinuteWithSuffix;
- (NSString *)timeHourMinuteWithPrefix:(BOOL)enablePrefix suffix:(BOOL)enableSuffix;

#pragma mark - Date String
- (NSString *)stringTime;
- (NSString *)stringMonthDay;
- (NSString *)stringYearMonthDay;
- (NSString *)stringYearMonthDayHourMinuteSecond;
- (NSString *)stringYearMonthDayHourMinuteSecondMsec; //具体到毫秒
- (NSString *)stringYearMonthDayHourMinuteSecondMsecWithoutSybol; //具体到毫秒并去除下划线，空格，冒号
+ (NSString *)stringYearMonthDayWithDate:(NSDate *)date;      //date为空时返回的是当前年月日
+ (NSString *)stringLoacalDate;
//返回年月
+ (NSString *)dateMonthDayWithDate:(NSDate *)date;


#pragma mark - Date formate
+ (NSString *)dateFormatString;
+ (NSString *)timeFormatString;
+ (NSString *)timestampFormatString;
+ (NSString *)timestampFormatStringSubSeconds;

#pragma mark - Date adjust
- (NSDate *) dateByAddingDays: (NSInteger) dDays;
- (NSDate *) dateBySubtractingDays: (NSInteger) dDays;

#pragma mark - Relative dates from the date
+ (NSDate *) dateTomorrow;
+ (NSDate *) dateYesterday;
+ (NSDate *) dateWithDaysFromNow: (NSInteger) days;
+ (NSDate *) dateWithDaysBeforeNow: (NSInteger) days;
+ (NSDate *) dateWithHoursFromNow: (NSInteger) dHours;
+ (NSDate *) dateWithHoursBeforeNow: (NSInteger) dHours;
+ (NSDate *) dateWithMinutesFromNow: (NSInteger) dMinutes;
+ (NSDate *) dateWithMinutesBeforeNow: (NSInteger) dMinutes;
+ (NSDate *) dateStandardFormatTimeZeroWithDate: (NSDate *) aDate;  //标准格式的零点日期
- (NSInteger) daysBetweenCurrentDateAndDate;    //负数为过去，正数为未来


#pragma mark - Date compare
- (BOOL)isEqualToDateIgnoringTime: (NSDate *) aDate;
- (NSString *)stringYearMonthDayCompareToday;                 //返回“今天”，“明天”，“昨天”，或年月日

#pragma mark - Date and string convert
+ (NSDate *)dateFromString:(NSString *)string;
+ (NSDate *)dateFromString:(NSString *)string withFormat:(NSString *)format;
- (NSString *)string;
- (NSString *)stringCutSeconds;
- (NSString *)stringWithFormat: (NSString *)format;

@end
