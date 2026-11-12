#Beamer Documentation

##**1. Introduction**

Beamer is a LaTeX document class used to create professional presentations and slides. It allows users to prepare presentations using LaTeX commands instead of traditional presentation software.

Beamer is particularly useful for academic presentations, technical seminars, classroom lectures, and research presentations.

It supports mathematical equations, images, tables, lists, themes, and animations.

##2. Objectives

The main objectives of learning Beamer are:

To understand the Beamer document class.

To create professional presentation slides using LaTeX.

To create title slides and content slides.

To organize presentations using frames and sections.

To insert images and mathematical equations.

To use themes and color schemes.

To create numbered and bulleted lists.

To compile presentations into PDF format.

## Sample Text
\documentclass{beamer}
\usetheme{Madrid}
\usepackage{graphicx} % Required for inserting images

\title{Adding images in LaTeX}
\subtitle{a beginner's guide to including images}
\author{AAYUSH OMPRAKASH PUPALWAD}
\date{November 2026}

\begin{document}
\begin{frame}
    \titlepage
\end{frame}

\begin{frame}{Introduction}
    \begin{itemize}
        \item LaTeX allows us to insert images into documents.
        \item Images make documents more attractive and informative.
        \item The graphicx package is used to add images.
    \end{itemize}

    \vspace{0.3cm}

    \textbf{Package required:}
    \begin{block}{}
        \texttt{\textbackslash usepackage\{graphicx\}}
    \end{block}
\end{frame}

\begin{frame}{How to add the Image?}
  Use  the following command to insert the image.
  \begin{block}{Syntax}
        \texttt{\textbackslash includegraphics[width=0.5\textbackslash textwidth]\{image.png\}}
    \end{block}

    
   \textbf{Example:}
     \begin{center}
        \includegraphics[width=0.4\textwidth]{swan.png}
    \end{center}

\end{frame}

\begin{frame}{Conclusion}
    \begin{itemize}
        \item Images can be easily inserted in LaTeX.
        \item The graphicx package provides image support.
        \item The includegraphics command controls image size.
        \item Images improve the presentation of documents.
    \end{itemize}

    \vspace{0.5cm}

    \begin{center}
        \Huge Thank You!
    \end{center}
\end{frame}

\end{document}
