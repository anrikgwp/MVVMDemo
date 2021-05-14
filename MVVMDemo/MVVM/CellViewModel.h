//
//  CellViewModel.h
//  MVVMDemo
//
//  Created by 陈小明 on 2021/5/13.
//

#import <Foundation/Foundation.h>
#import <ReactiveCocoa/ReactiveCocoa.h>
#import "DemoModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface CellViewModel : NSObject

@property (nonatomic,copy,readonly) NSString *titleStr;

@property (nonatomic,copy,readonly) NSString *numStr;

@property (nonatomic,copy,readonly) RACCommand *addCommand;

- (instancetype)initWithModel:(DemoModel *)model;

@end

NS_ASSUME_NONNULL_END
