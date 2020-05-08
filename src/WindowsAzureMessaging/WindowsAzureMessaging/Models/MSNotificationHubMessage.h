//----------------------------------------------------------------
//  Copyright (c) Microsoft Corporation. All rights reserved.
//----------------------------------------------------------------

#import <Foundation/Foundation.h>

@interface MSNotificationHubMessage : NSObject

/**
 * Notification title.
 */
@property(nonatomic, copy, readonly) NSString *title;

/**
 * Notification message.
 */
@property(nonatomic, copy, readonly) NSString *message;

/**
 * Notification badge.
 */
@property(nonatomic, readonly) NSInteger badge;

/**
 * Custom data for the notification.
 */
@property(nonatomic, copy, readonly) NSMutableDictionary<NSString *, NSString *> *additionalData;

- (instancetype)initWithNotification:(NSDictionary *)notification;
+ (instancetype)createFromNotification:(NSDictionary *)notification;
@end
