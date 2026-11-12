# Beamer Documentation

## 1. Introduction

Beamer is a LaTeX document class used to create professional presentations and slides. It allows users to prepare presentations using LaTeX commands instead of traditional presentation software.

## 2. Objectives

The main objectives of learning Beamer are:

- To understand the Beamer document class.
- To create professional presentation slides using LaTeX.
- To create title slides and content slides.
- To organize presentations using frames and sections.
- To insert images and mathematical equations.
- To use themes and color schemes.
- To create numbered and bulleted lists.
- To compile presentations into PDF format.

## 3. Sample text
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



## 4. Important Beamer Commands

| Command | Purpose |
|---|---|
| `\documentclass{beamer}` | Defines the Beamer document class |
| `\title{}` | Sets the presentation title |
| `\author{}` | Specifies the presenter |
| `\institute{}` | Specifies the institution |
| `\date{}` | Sets the presentation date |
| `\begin{frame}` | Starts a new slide |
| `\end{frame}` | Ends a slide |
| `\titlepage` | Displays the title slide |
| `\section{}` | Creates a presentation section |
| `\frametitle{}` | Sets a slide title |
| `\tableofcontents` | Displays the presentation contents |


## 5. Using Themes

Beamer provides predefined themes to customize the appearance of presentations.

Example:

```latex
\usetheme{Madrid}
```

Some commonly used themes include:

- Madrid
- Berlin
- CambridgeUS
- Copenhagen
- Warsaw
- AnnArbor

Themes help maintain a consistent design throughout a presentation.

## 6. Adding Mathematical Equations

Beamer supports mathematical expressions just like ordinary LaTeX documents.

Example:

```latex
\begin{frame}{Mathematical Equation}

\[
E = mc^2
\]

\end{frame}
```

This makes Beamer useful for scientific and technical presentations.



## 7. Advantages of Beamer

- Creates professional academic presentations.
- Supports mathematical equations and technical content.
- Provides predefined themes and customization options.
- Maintains consistent formatting across slides.
- Integrates directly with LaTeX.
- Produces PDF presentations that can be shared easily.

## 8. Conclusion

Beamer is a useful presentation tool based on LaTeX. It allows users to create structured and professional slides using simple commands and environments.

Through the practical exercises in the Technical Writing course, I learned how to create title slides, organize content into frames, add images, use themes, and generate PDF presentations.

Beamer is especially useful for academic and technical presentations.

---
