
   {dede:match}<div itemprop="articleBody">[内容]<!-- seo标签描述 -->{/dede:match}
   {dede:trim replace=''}<a([^>]*)>(.*)</a>{/dede:trim}
{dede:trim replace=''}<script([^>]*)>(.*)</script>{/dede:trim}
{dede:trim replace=''}<!--(.*)-->{/dede:trim}
{dede:trim replace=''}<table([^>]*)>(.*)</table>{/dede:trim}
{dede:trim replace=''}<style([^>]*)>(.*)</style>{/dede:trim}
{dede:trim replace=''}<img([^>]*)>{/dede:trim}
{dede:trim replace=''}<object([^>]*)>(.*)</object>{/dede:trim}
{dede:trim replace=''}<embed([^>]*)>(.*)</embed>{/dede:trim}
{dede:trim replace=''}<iframe([^>]*)>(.*)</iframe>{/dede:trim}
{dede:trim replace=''}<param([^>]*)>(.*)</param>{/dede:trim}
{dede:trim replace=''}<div([^.]*)>{/dede:trim}
{dede:trim replace=''}</div>{/dede:trim}
   {dede:function}{/dede:function}
